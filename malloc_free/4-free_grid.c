#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2d grid created by alloc_grid function
 *@grid: pointer to a 2d grid
 *@height: number of rows in the grid
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
