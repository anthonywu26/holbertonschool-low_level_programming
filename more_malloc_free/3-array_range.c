#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: starting value
 * @max: ending value
 * Return: pointer to the allocated array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, length;

	length = max - min + 1;
	if (length <= 0)
		return (NULL);

	arr = malloc(sizeof(*arr) * length);
	if (!arr)
		return (NULL);

	for (i = 0; i < length; i++)
		arr[i] = min + i;

	return (arr);
}
