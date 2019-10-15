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
	int i = 0;
	char *new_str;
	int size = 1;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[i] != '\0')
		{
			size++;
			i++;
		}
		i++;
		new_str = malloc(size * sizeof(char));
		for (i = 0; i <= (int)size; i++)
		{
			new_str[i] = str[i];
		}
		return (new_str);
	}
	return (new_str);
}
