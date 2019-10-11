#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy -concatenates two strings.
 * @dest: take a pointer, string.
 * @src: take a pointer
 * @n: take a int.
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int size;

	for (size = 0; size < n && src[size] != '\0'; size++)
	{
		dest[size] = src[size];
	}
	for (; size < n; size++)
	{
		dest[size] = '\0';
	}
	return (dest);

}
