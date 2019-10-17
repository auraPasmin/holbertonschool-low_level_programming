#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - creates an array of integers.
 * @min: take a pointer
 * @max: take a pointer
 * Return: prt or null
 *
 */
int *array_range(int min, int max)
{
	int i;
	int *prt;
	int t = max - min;
	

	if (min > max)
	{
		return (NULL);
	}
	prt = malloc((t + 1) * sizeof(int));
	if (prt == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= t; i++, min++)
	{
		prt[i] = min;
	}
	return (prt);
}
