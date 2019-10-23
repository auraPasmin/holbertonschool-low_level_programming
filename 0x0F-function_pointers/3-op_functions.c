#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - sum  a + b
 * @a: take a int
 * @b: take b int
 * Return: sum a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference  a - b
 * @a: take a int
 * @b: take b int
 * Return: difference a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mult a * b
 * @a: take a int
 * @b: take b int
 * Return: mult a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div a with b
 * @a: take a int
 * @b: take b int
 * Return:  div a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
	exit(100);
	}
	return (a / b);
}
/**
 * op_mod - remainder div
 * @a: take a int
 * @b: take b int
 * Return: remainder div a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a % b);
}
