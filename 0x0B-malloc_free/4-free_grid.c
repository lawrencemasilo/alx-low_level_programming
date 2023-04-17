#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees memory of a 2d array
 * @grid: a pointer pointing to a 2d array
 * @height: number of rows of the array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
