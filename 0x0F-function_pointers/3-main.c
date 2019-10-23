#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  main 3
 * @argc: take size/len arg
 * @argv: number arg
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, j, c;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
		c = f(i, j);
		printf("%d\n", c);
		return (0);
}
