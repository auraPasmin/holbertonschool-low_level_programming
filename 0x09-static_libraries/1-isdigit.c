#include "holberton.h"

/**
  * _isdigit -  Returns 1 if c is a digit
  * @c: take a int
  * Return: 1 or 0
  */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
	return (1);
}
else
{
	return (0);
}
}
