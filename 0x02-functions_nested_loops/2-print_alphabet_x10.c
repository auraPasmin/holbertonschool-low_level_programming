#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char i;
	int q;

	for (q = 0; q <= 9; q++)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	i='a';
	_putchar('\n');
	}
}
