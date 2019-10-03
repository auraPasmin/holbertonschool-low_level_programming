#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp -concatenates two strings.
 * @s1: take a pointer, string.
 * @s2: take a pointer
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	char t1, t2;

	do {
		t1 = *s1++;
		t2 = *s2++;
		if (t1 == '0')
			return (t1 - t2);
	} while (t1 == t2);
	return (t1 - t2);
}
