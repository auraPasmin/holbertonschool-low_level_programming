#include "holberton.h"

/**
  * print_line -  prints lines
  * @n: take a character
  * Return: void
  */
void print_line(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c <= n; c++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
