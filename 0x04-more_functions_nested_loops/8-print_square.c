#include "holberton.h"
/**
* print_square - prints perfect square
* @size: size to print
*/
void print_square(int size)
{

	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = size; a > 0; a--)
		{
			for (b = size; b > 0; b--)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
