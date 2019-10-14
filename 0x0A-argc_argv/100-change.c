#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function
 * @argc: size
 * @argv: string
 * Return: 0 finished good, 1 in otherwise
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int m = atoi(argv[1]);

		if (m < 0)
			printf("0\n");
		else
		{
			int i;
			int r = 0;
			int val[] = {25, 10, 5, 2, 1};

			for (i = 0; i < 5; i++)
			{
				r = r + m / val[i];
				m = m % val[i];
			}
			printf("%d\n", r);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
