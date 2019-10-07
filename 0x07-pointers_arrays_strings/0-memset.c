#include "holberton.h"

/**
 * *_memset - function that fills memory with a constant byte.
 * @s: this a pointer
 * @b: take a char
 * @n: take a unsigned int
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(p + i) = b;
	}
	return (s);
}
