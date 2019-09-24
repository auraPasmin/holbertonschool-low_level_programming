#include "holberton.h"

/**
 * print_last_digit - print the last number
 *@p: take a int
 * Return: p
 */
int print_last_digit(int p)
{
	if (p < 0)
	{
		p = (p % 10) * -1;
		_putchar(p + '0');
		return (p);
	}
	p = p % 10;
	_putchar(p + '0');
	return (p);

}

