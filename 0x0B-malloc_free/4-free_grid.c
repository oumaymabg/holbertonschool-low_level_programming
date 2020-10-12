#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - clear a grid
 * @grid: the grid to clear
 * @height: height of the grid
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
