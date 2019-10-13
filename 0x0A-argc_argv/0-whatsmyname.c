#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
  *  main - this a firs main
  * @argc: take a int
  * @argv: take a pointer
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		i++;
		printf("%s\n", argv[i]);
		return (0);
	}
	return (0);
}
