#include "search_algos.h"
/**
 * linear_search - searches for a value in an array
 * @array: is a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: index or -1 if not
 */
int linear_search(int *array, size_t size, int value)
{
	size_t cont = 0;

	if (!array)
		return (-1);

	for (cont = 0; cont < size; cont++)
	{
		printf("Value checked array[%d]= [%d]\n", (int)cont, array[cont]);
		if (array[cont] == value)
			return ((int)cont);
	}
	return (-1);
}
