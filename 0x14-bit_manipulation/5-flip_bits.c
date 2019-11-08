#include "holberton.h"
/**
 * flip_bits - flip bits
 *@n: is a unsigned long int
 *@m: is a unsigned long int
 * Return: On succes.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	if (!(n == m))
	{
		while (!(n == m))
		{
			if (n == 0 && m == 0)
			{
				break;
			}

			if (!((n & 1) == (m & 1)))
			{
				count++;
			}
			n = n >> 1;
			m = m >> 1;
		}
	}
	return (count);
}
