#include <stdio.h>

int main() {
    char b[20];
    scanf("%[^\n]s", b);
    int k = 0;
    int i=0;
    
    while (b[i] != '\0')
    {
        if(b[i]<='9' && b[i]>='0')
        {
            k++;
        }
        i++;
    }    


    printf("%d \n", k);
}
