#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program to add positive numbers only
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int i = 1;
	int r = 0;
	int dex, aux;

	if (argc < 2)
	{
		printf("%d\n", r);
	}
	else
	{
		for (; i < argc; i++)
		{
			aux = 0;

			for (dex = 0; argv[i][dex] != '\0'; dex++)
			{
				if ((int)argv[i][dex] < 48 || (int)argv[i][dex] > 57)
				{
					printf("%s\n", "Error");
					return (1);
				}
				aux = 1;
			}
			if (aux == 1)
			{
				r = r + atoi(argv[i]);
			}
		}
		printf("%d\n", r);
	}
	return (0);
}
