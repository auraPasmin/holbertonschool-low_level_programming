#include "holberton.h"
#include <stdio.h>

/**
 * _strncat -concatenates two strings.
 * @dest: take a pointer, string.
 * @src: take a pointer
 * @n: take a int.
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int size, size_2;

	for (size = 0; dest[size] != 0; size++)
	{
		*(dest + size) = dest[size];
	}
	for (size_2 = 0; dest[size_2] != 0 &&  size_2 < n; size_2++)
	{
		*(dest + size) = src[size_2];
		size++;
	}
	return (dest);

}
