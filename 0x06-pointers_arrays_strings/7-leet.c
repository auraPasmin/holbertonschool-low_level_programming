#include "holberton.h"
#include <stdio.h>

/**
 * leet - change
 * @k: take a pointer, string.
 * Return: k
 */
char *leet(char *k)
{
	int i, j;
	char *c1 = "a,e,o,t,l,A,E,O,T,L";
	char *c2 = "4,3,0,7,1,4,3,0,7,1";

	for (i = 0; k[i] != '\0'; i++)
	{
		for (i = 0; c1[i] != '\0'; j++)
		{
		if (k[i] == c1[j])
		{
			k[i] = c2[i];
		}
		}
	}
	return (k);
}
