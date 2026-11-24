#include "function_pointers.h"

/**
 * array_iterator - executes function on each element of an array
 *@array: array to be iterated over
 *@size: number of elements in array
 *@action: pointer to function to be applied
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
