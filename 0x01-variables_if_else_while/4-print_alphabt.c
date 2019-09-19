#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char c;

	c = 'a';
	{
		if (c != 'e' && c != 'q')
		c = c + 1;
	else
		while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	}
	return (0);
}
