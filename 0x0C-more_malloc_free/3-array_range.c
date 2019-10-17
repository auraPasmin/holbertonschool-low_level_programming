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
	int i = 0;
	int *prt;

	if (min > max)
	{
		return (NULL);
	}
	prt = malloc((max - min + 1) * sizeof(int));
	if (prt == NULL)
	{
		return (NULL);
	}
	while (i <= max - min)
	{
		prt[i] = min;
		min++;
		i++;
	}
	return (prt);
}
