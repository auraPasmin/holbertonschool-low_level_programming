#include <stdio.h>

/**
 * main -Entry point
 * Descripcion:
 * Return: 0
 */
int main(void)
{
	int i;
	long int n0 = 2;
	long int n1 = 1;
	long int fibo;

	for (i = 0; i < 50; i++)
	{
		printf("%ld", fibo);
		if (i < 49)
		{
			printf(",");
		}
		fibo = n0;
		n0 = n0 + n1;
		n1 = fibo;
	}
	putchar('\n');
	return (0);
}

