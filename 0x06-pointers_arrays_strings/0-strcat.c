#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - oncatenates two strings.
 * @dest: take a pointer, string.
 * @src: take a pointer
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *other_dest = dest;

	while (*other_dest != '\0')
	{
		other_dest++;
	}
	while (*src != '\0')
	{
		*other_dest = *src;
		other_dest++;
		src++;
	}
	return (dest);

}
