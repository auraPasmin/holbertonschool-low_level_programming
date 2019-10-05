#include <stdio.h>

/**
 * main -Entry point
 * Descripcion:
 * Return: 0
 */
int main(void)
{
	int i;
	long int n0 = 1;
	long int n1 = 2;
	long int fibo;

	for (i = 0; i < 50; i++)
	{
		if (i < 49)
		{
			printf(",");
		}
		printf("%lu", fibo);
		fibo = n0;
		n0 = n0 + n1;
		n1 = fibo;
	}
	putchar('\n');
	return (0);
}

