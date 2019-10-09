#include "holberton.h"

/**
 * _strlen_recursion- the count array
 * @s: The character is a pointer
 *
 * Return: the long .
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return(0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
