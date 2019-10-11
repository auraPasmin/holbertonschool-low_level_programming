#include "holberton.h"

/**
  * _puts -  rints a string
  * @str:take a pointer, string.
  * Return:string
  */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
