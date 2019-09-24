#include "holberton.h"

/**
 * _isalpha - return 1 if c is lowcase or capital letter
 *@c: take a int
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
