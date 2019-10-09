#include "holberton.h"

/**
 * _print_rev_recursion - the arrays rev
 * @s: The character is a pointer
 *
 * Return: On success 1.
 */
void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return;
	}
	_print_rev_recursion(&s[1]);

	_putchar(s[0]);
}
