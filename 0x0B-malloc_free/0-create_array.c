#include "holberton.h"
#include <stdlib.h>
 #include <stdio.h>

/**
 * create_array - create a array
 * @size: int
 * @c: char
 * Return: array or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ary;

	if (size == 0)
	{
		return (NULL);
	}
	ary = malloc(size * sizeof(c));
	if (ary == NULL)
	{
		return (NULL);
	}
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			ary[i] = c;
		}
		return (ary);
	}
	return (ary);
}
