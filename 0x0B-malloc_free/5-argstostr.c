#include<stdio.h>
#include<stdlib.h>
#include"holberton.h"

/**
* argstostr -  returns a pointer dimensional array
* @ac: take a int width
* @av: take a int height
* Return: array
*/
char *argstostr(int ac, char **av)
{
	int i, j;
	int k = 0; 
	int len = 0;
	char *arry;

	if (ac <= 0)
		return (NULL);
	if (av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
		}
		len = len + j + 1;
	}
	arry = malloc(sizeof(char) * len + 1);
	if (arry == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			arry[k] = av[i][j];
			k++;
		}
		arry[k] = '\n';
		k++;
	}
	arry[k] = '\0';
	return (arry);
}
