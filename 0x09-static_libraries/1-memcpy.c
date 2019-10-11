#include "holberton.h"

/**
 * *_memcpy -  copies memory area.
 * @dest: this a pointer
 * @src: take a pointer
 * @n: take a unsigned int
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *p = dest;
	char *q = src;

	for (i = 0; i < n; i++)
	{
		*(p + i) = q[i];

	}
	return (dest);
}
