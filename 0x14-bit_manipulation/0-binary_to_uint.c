#include "holberton.h"

/**
 * binary_to_uint - converts a binary
 * number take a unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: num
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, number = 0;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			number = (number * 2) + (b[i] - '0');
		else
			return (0);
	}
	return (number);
}
