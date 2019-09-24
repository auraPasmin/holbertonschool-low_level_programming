#include "holberton.h"

/**
 * _islower - return 1 if lowcase
 *@c: take a  character
 * Return: 0 for opercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
