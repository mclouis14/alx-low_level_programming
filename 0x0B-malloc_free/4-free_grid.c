#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Frees 2 dimensional grid previously created by alloc_grid func.
 * @grid: 2d grid
 * @height: input
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int c;

	for (c = 0; c < height; c++)
	{
		free(grid[c]);
	}
	free(grid);
}
