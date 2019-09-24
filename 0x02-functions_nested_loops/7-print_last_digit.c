#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
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

