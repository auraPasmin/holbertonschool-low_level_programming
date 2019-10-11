#include "holberton.h"
#include <stdio.h>

/**
 * *_strspn -  reccor array.
 * @s: this a pointer
 * @accept: take a pointer
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
			if (s[i] != accept[j])
			{
				break;
			}
	}
	return (count);
}
