#include"holberton.h"
#include<stdlib.h>
/**
 * free_grid - frees dimensional grid
 * @grid: take a int grid
 * @height: take a int height
 *
 * Return: arr
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
