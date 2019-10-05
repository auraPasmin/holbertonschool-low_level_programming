#include <stdlib.h>
#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int  main (void)
{
	int i, k;
	
	for (k =0; k <= 99; k++)
	{
		for (i = 0; i <= 99; i++)
		{
			putchar(k / 10 + '0');
			putchar(k % 10 + '0');
			putchar(' ');
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(',');
			putchar(' ');

			
		}
	}
	putchar('\n');
	return(0);
}















