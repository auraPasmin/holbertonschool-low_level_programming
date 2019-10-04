#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - change
 * @k: take a pointer, string.
 * Return: k encryptedi
 */
char *rot13(char *k)
{
	int i;

	char *c1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMOPQRSTUVWXYZ";
	char *c2 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *k_pun = k;

	while (*k_pun != '\0')
	{
		for (i = 0; i < 26; i++)
			if (*k_pun == c1[i])
			{
				*k_pun = c2[i];
			}
	}

	return (k);
}
