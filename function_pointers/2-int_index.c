#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *@array: pointer to an integer array
 *@size: number of elements in the array
 *@cmp: pointer to function that identifies if int has been found
 *Return: index of the found int, -1 if not found, or inputs invalid
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0 || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
