#include "holberton.h"

/**
 * factorial- the count array
 * @n: The character is a int
 *
 * Return: -1 or 0 or factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (factorial(n - 1) * n);
}
