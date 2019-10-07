#include "holberton.h"
#include <stdio.h>

/**
 * *_strchr -  copies memory area.
 * @s: this a pointer
 * @c: take a char
 * Return: c or Null
 */
char *_strchr(char *s, char c)
{

	for (;; s++)
	{
		if (*s == c)
			return ((char *) s);
		if (*s == '\0')
			return (NULL);
	}
}
