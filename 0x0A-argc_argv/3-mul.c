#include <stdio.h>
#include <stdlib.h>
/**
 * main - Main function
 * @argc: parameters of the function
 * @argv: a pointer to the strings.
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	while (i < argc)
	{
		mul *= atoi(argv[i]);
		i++;
	}
	printf("%d\n", mul);
	return (0);
}
