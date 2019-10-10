#include "holberton.h"

/**
 * is_prime_number - auxiliar
 * @n: take a int
 * @c: take a int
 * Return: int
 */
int is_prime(int n, int c);

 /**
  * is_prime_number - is prime o no
  * @n:take a in
  * @c: take a int
  * Return: 1 o 0
  */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
 * is_prime - funcion
 * @n: take a int
 * @c: take a int
 * Return: 0 or 1
 */
int is_prime(int n, int c)
{
	if (n % c == 0 || n < 2)
	{
		return (0);
	}
	else if (c > n / 2)
	{
		return (1);
	}
	return (is_prime(n, c + 1));
}
