#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program to add positive numbers only
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 if success and 1 if otherwise
 */
int main(int argc, char **argv)
{
	int i = 0;
	int r, dex;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		while (i < argc)
		{
			for (dex = 0;argv[i][dex] != '\0'; dex++)
			{
				if (isdigit(argv[i][dex] == 0))
				{
					printf("%s\n", "Error");
					return (1);
				}
			}
			r = r + atoi(argv[i]);
			i++;
		}
		printf("%d\n", r);
	}
	return (0);
}
