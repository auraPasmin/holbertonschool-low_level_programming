#include<stdio.h>
#include<stdlib.h>
#include"holberton.h"

/**
* alloc_grid -  returns a pointer dimensional array
* @width: take a int width
* @height: take a int height
* Return: array
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arry;

	if (height <= 0 || width <= 0)
	{
	return (NULL);
	}
	arry = (int **)malloc(sizeof(int *) * height);
	if (arry == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arry[i] = (int *)malloc(sizeof(int) * width);
		if (arry[i] == NULL)
		{
		for (i--; i >= 0; i--)
		free(arry[i]);
		free(arry);
		return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arry[i][j] = 0;
		}
	}
	return (arry);
}
