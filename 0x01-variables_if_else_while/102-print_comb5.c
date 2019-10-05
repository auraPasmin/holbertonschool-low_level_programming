#include <stdlib.h>
#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i, k;

	for (k = 0; k < 99; k++)
	{
		for (i = k++; i < 100; i++)
		{
			putchar(k / 10 + '0');
			putchar(k % 10 + '0');
			putchar(' ');
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			if (k < 98 || i < 99)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}















