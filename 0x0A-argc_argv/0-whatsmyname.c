#include <stdio.h>
#include <stdlib.h>

/**
  *  main - this a firs main
  * @argc: take a int
  * @argv: take a pointer
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
