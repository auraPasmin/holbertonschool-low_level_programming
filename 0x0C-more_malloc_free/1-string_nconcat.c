#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - function that allocates memory using malloc.
 * @s1: take a pointer
 * @s2: take a pointer
 * @n: take a unsigned int
 * Return: A pointer or if fails return 98
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s1[j] != '\0'; j++)
	{
	}
	if (n >= j)
	{
		n = j;
	}
	p = malloc((sizeof(char) * (i + n + 1)));
	if (p != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			p[i] = s1[i];
		}
		for (j = 0; j < n; j++)
		{
			p[i] = s2[j];
			i++;
		}
	p[i] = '\0';
	return (p);
	}
	else 
	{
		return (NULL);
	}
}
