#include "holberton.h"
/**
 * is_prime_number - auxiliar
 * @n:
 * @c:
 * Return: int
 */
 
int is_prime(int n, int c);

/**
 * is_prime_number - is prime o no
 * @n:
 * Return: 1 o 0
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
  * is_prime - funcion 
  * @n
  * @c
  *Return: 
  */
int is_prime(int n, int c)
{
	if (n % c == 0 || n < 2) 
	{
		return (0);
	}
	else if (c > n/2)
	{
		return (1);
	}
	return is_prime(n, c + 1);
}
