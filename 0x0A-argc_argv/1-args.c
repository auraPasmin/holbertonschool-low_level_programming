#include <stdio.h>

/**
  *  main - this a firs main
  * @argc: take a int
  * @argv: take a pointer
  * Return: 0
  */
int main(int argc, char *argv[])
{
	(void)argv;
	

	if (argc > 0)
		printf("%d \n", argc - 1);
	return (0);
}
