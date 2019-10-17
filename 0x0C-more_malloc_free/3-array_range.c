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

	if (min > max)
	{
		return (NULL);
	}
	prt = malloc((max - min + 1) * sizeof(*prt));
	if (prt == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < max - min ; i++, min++)
	{
		prt[i] = min;
	}
	return (prt);
}
