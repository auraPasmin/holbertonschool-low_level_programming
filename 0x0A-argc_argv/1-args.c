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
	argc--;

	if (argc >= 0)
		printf("%d \n", argc);
	return (0);
}
