#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: take a unsigned int
 * Return: A pointer or if fails return 98
 *
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p != NULL)
	{
		return (p);
	}
	else
	{
		exit(98);
	}
	free(p);
}
