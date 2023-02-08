#include <stdio.h>

int fibonacci(int num)
{
	if (num == 0)
	{
		return 0;
	}
	else if (num == 1)
	{
		return 1;
	}
	else
	{
		return fibonacci(num-1) + fibonacci(num-2);
	}
}

int main()
{
	int c;
	scanf("%d", &c);

	for (int i = 0; i < c; i++) 
	{
		printf("%d ", fibonacci(i));
	}
	printf("\n");
}

