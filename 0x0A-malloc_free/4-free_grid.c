#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees memory from a given grid
 * @grid: argument for the function
 * @height: argument for the function
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
int i;

	if (grid != NULL || height > 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
