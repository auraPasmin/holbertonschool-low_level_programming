#include<stdio.h>
#include<stdlib.h>
#include"holberton.h"
/**
* str_concat - concatenates two strings
* @s1: char s1 pointer
* @s2: char s2 pointer
*
* Return: arr or NUL
*/
char *str_concat(char *s1, char *s2)
{
	char *array;
	int i = 0;
	int j = 0;
	int s1len, s2len;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	array = malloc(sizeof(*array) * (i + j + 1));
	if (array == NULL)
	{
		return ('\0');
	}
	for (s1len = 0; s1len < i; k++)
	{
		array[s1len] = s1[s1len];
	}
	for (s2len = 0; s2len < j; s2len++)
	{
		array[i + s2len] = s2[s2len];
	}
	return (array);
}
