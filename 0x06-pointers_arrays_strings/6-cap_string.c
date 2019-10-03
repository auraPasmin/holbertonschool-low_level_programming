#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - change
 * @k: take a pointer, string.
 * Return: k
 */
char *cap_string(char *k)
{
	int size;

	for (size = 0; k[size] != '\0'; size++)
	{
		if( size == 0)
		{
		if (k[size] >= 96 && k[size] <= 123)
		{
			k[size] = k[size] - 32;
		}
		}
	}
	return (k);
}
