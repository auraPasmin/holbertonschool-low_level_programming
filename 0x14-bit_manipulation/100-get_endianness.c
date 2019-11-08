#include "holberton.h"
/**
 * get_endianness - get the endiannes of the arch
 * @void: take a return
 * Return: 1 in little indian - 0 in big indian.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*(c + 2) > *(c + 3))
		return (0);
	return (1);
}
