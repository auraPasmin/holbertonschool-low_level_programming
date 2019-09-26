#include "holberton.h"

/**
  * print_diagonal -  prints lines
  * @n: take a int
  * Return: On succes line.
  */
void print_diagonal(int n)
{
	int c, d;

	if (n > 0)
	{
		for (c = 1; c <= n; c++)
		{
			for (d = 2; d <= c + 1; d++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
