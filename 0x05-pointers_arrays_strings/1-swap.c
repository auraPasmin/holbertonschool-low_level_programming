#include "holberton.h"

/**
  * swap_int - swaps the values of two integers.
  * @a: take a pointer
  * @b: take a pointer:w
  * not return
  */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;

}
