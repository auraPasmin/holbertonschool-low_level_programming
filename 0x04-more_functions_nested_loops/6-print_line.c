#include "holberton.h"

/**
  * print_line -  prints lines
  * @n: take a int
  * @c: take a int
  * Return: On succes line.
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
