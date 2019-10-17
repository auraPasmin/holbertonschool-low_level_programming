#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - creates an array of integers.
 * @min: take a pointer
 * @max: take a pointer
 * Return: A pointer or if fails return 98
 *
 */
int *array_range(int min, int max)
{
	char *prt;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	prt = malloc(size * sizeof(*p));
	if (p != NULL)
	{
	for (i = 0; i < size; i++)
	{
		prt[i] = min;
		min++;
	}
	return (prt);
	}
	return (NULL);
}
