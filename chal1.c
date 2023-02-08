#include <stdio.h>

int compareStr(char[], char[]);
int compareLen(char[], char[]);
int main() {
	char a[20] = "welcometoc";
	char b[20];	
	char c[10];

	scanf("%[^\n]s", b);

	if (compareStr(a, b)==1 && compareLen(a, b)==1)
	{
		printf("Good");
	}
	else
	{
		printf("Bad");
	}
	printf("\n");
}

int compareStr(char a[], char b[]) {
	int k = 0, i = 0;

	while(a[i] != '\0' && b[i] != '\0')
	{
		if (a[i] != b[i])
		{
			k = 1;
			break;
		}
		else
		{
			i++;
		}
	}

	if(k == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int compareLen(char a[], char b[])
{
	int l = 0;
	int m = 0;
	int i = 0;
	while (a[l] != '\0')
	{
		l++;
	}

	while (b[m] != '\0')
	{
		m++;
	}

	if (l == m){
		return 1;
	} 
	else {
		return 0;
	}
}
