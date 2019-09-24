#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - sum of a and b
 * @n: take a int
 * Return: a + b
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d", n);
		if (n < 98)
		{
			n++;
		}
		else
		{
			n--;
		}

		printf(",");
		printf(" ");
	}
	printf("98\n");
}

