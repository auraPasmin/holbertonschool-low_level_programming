#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk -  reccor array.
 * @s: this a pointer
 * @accept: take a pointer
 * Return: count
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
		return (0);

}
