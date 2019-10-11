#include "holberton.h"

/**
  * _isupper -  Returns 1 if c is uppercase
  * @c: take a character
  * Return: 0 or 1
  */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
	return (1);
}
else
{
	return (0);
}
}
