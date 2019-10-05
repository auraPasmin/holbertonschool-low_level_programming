#include <stdio.h>

/**
 * main -Entry point
 * Descripcion:
 * Return: 0
 */
int main(void)
{
	int i;
	long int na = 0;
	long int ne = 1;
	long int fibo;

	for (i = 0; i < 50; i++)
	{
		fibo = ne + na;
		na = ne;
		ne = fibo;
		
		if (i != 49)
		{
			printf("%ld, ", fibo);
		}
		else
		{
			printf("%ld\n", fibo);
		}
	}
	return (0);
}

