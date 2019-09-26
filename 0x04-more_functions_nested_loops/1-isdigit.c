#include "holberton.h"

/**
  * _idigitr -  Returns 1 if c is a digit
  * @c: take a int
  * return: 1
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
