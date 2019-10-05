#include "holberton.h"

/**
 * times_table - that prints the 9 times table, starting with 0.
 * Return: void no return anything
 */
int main()
{
	int i;
	long int n0 = 1;
	long int n1 = 1;
	long int fibo = 0;
	for (i = 0; i < 50; ++i)
	{
		printf("%ld", fibo);
		fibo = n0;
		n0 = n0 + n1;
		n1 = fibo;
	}
	putchar ('\n');
	return (0);
}

