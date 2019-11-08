#include "holberton.h"
/**
 * get_bit - get a bit in a position
 *@n: is a unsigned long int
 *@index: is a unsigned int
 * Return: On succes.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return  (-1);
	}
	return (n >> index & 1);
}
