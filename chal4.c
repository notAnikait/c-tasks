#include <stdio.h>

int is_fibonacci(int num)
{
    int prev = 0, curr = 1;
    while(curr<=num)
    {
        if(curr == num)
        {
        	return 1;
        }
        else
        {
        	int temp = prev + curr;
        	prev = curr;
        	curr = temp;
        }
    }
    return 0;
}

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if(is_fibonacci(i)==0)
        {
        	printf("%d ", i);
        }
        else
        {
        	n++;
        }
    }
    printf("\n");
    return 0;
}

