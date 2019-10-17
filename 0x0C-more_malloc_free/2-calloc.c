#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - crate calloc using malloc
 * @nmemb: take a unsigned int
 * @size: take a unsisgned int
 * Return: array o NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr != NULL)
	{
	for (i = 0; i < nmemb * size; i++)
		*(ptr + i) = 0;
	return (ptr);
	}
	else
	{
	return (NULL);
	}
}
