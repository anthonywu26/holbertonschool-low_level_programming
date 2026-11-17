#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2D array of integers, initialised to 0
 *@width: number of columns
 *@height: number of rows
 *Return: pointer to the new array
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;
	int address_null;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);

	address_null = -1;
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (!grid[i])
		{
			address_null = i;
			break;
		}

		for (j = 0; j < width; j++)
			*(grid[i] + j) = 0;
	}
	if (address_null >= 0)
	{
		for (i = 0; i < address_null; i++)
			free(grid[i]);

		free(grid);
		return (NULL);
	}
	else
	{
		return (grid);
	}
}
