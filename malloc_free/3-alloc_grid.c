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

	i = 0;
	address_null = -1;
	while (i < height)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (!grid[i])
		{
			address_null = i;
			break;
		}

		j = 0;
		while (j < width)
		{
			*(grid[i] + j) = 0;
			j++;
		}
		i++;
	}
	if (address_null >= 0)
	{
		i = 0;
		while (i < address_null)
		{
			free(grid[i]);
			i++;
		}
		free(grid);
		return (NULL);
	}
	else
	{
		return (grid);
	}
}
