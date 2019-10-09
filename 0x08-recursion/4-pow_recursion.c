#include "holberton.h"

/**
 * _pow_recursion - potencia
 * @x: The character is a int
 * @y: the character is a int
 * Return: -1 or 0 or pow
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y >= 0)
	{
		return (_pow_recursion(x, y - 1) * x);
	}
	return (0);
}
