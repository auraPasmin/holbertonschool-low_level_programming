#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _abs(int p)
{
	if (p < 0)
	{
		p = p * -1;
		return (p);
	}
	else
	{
		return (p);
	}

}

