#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - create a array
 * @str: take a pointer
 * Return: array or NULL
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0;str[i]; i++)
		;
	i++;
	new_str = malloc(i * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		new_str[j] = str[j];
	}
	return (new_str);
}
