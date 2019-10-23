#include "function_pointers.h"
#include <stdio.h>
/**
  * array_iterator - print array
  * @array: pointer the array
  * @size: size for array
  * @action:pointer funtion
  * Return: nothing take a void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
