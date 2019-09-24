#include "holberton.h"

/**
 * times_table - that prints the 9 times table, starting with 0.
 * Return: void no return anything
 */
void times_table(void)
{
	int p, v, m;

	for (p = 0; p <= 9; p++)
	{
		for (v = 0; v <= 9 ; v++)
		{
			m = p * v;
			if (v == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if ((m / 10) == 0)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((m / 10) + '0');
				}

				_putchar((m % 10) + '0');
			}
		}
	_putchar('\n');
	}
}
