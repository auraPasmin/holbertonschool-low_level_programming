#include <stdio.h>
/**
 * main - Main function
 * @argc: an integer with the number of parameters of the function
 * @argv: a pointer..
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int c = 0;

	while (c < argc)
	{
		printf("%s\n", argv[c]);
		c++;
	}
	return (0);
}
