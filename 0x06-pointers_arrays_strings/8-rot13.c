#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - change
 * @k: take a pointer, string.
 * Return: k encryptedi
 */
char *rot13(char *k)
{
	int i, j;

	char *c1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMOPQRSTUVWXYZ";
	char *c2 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; k[i] != '\0'; i++)
	{
		for (j = 0; c1[j] != '\0'; j++)
			if (k[i] == c1[j])
			{
				k[i] = c2[j];
			}
			else if (k[i] == c2[j])
			{
				k[i] = c1[j];
			}
	}

	return (k);
}
