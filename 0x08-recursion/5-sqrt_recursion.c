#include "holberton.h"
int raiz(int n, int c);

/**
  * _sqrt_recursion - print sqrt
  * @n:take a int
  * Return: -1 or sqrt funcion
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (raiz(n, 1));
}

/**
 * raiz - funcion
 * @n: take a int
 * @c: take a int
 * Return: 0 - 1 or sqrt
 */
int raiz(int n, int c)
{
	if ((c * c) < n)
		return (raiz(n, c + 1));
	else if ((c * c) == n)
		return (c);
	else
		return (-1);
}
