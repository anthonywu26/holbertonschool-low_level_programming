#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates char array and initialize with specific char
 *@size: length of array in bytes
 *@c: character to write at each byte
 *Return: pointer to created array, NULL on malloc error
 */
char *create_array(unsigned int size, char c)
{
	char *newarray;
	unsigned int i;

	if (size == 0)
		return (NULL);

	newarray = (char *) malloc(size);
	if (!newarray)
		return (NULL);

	i = 0;
	while (i < size)
	{
		newarray[i] = c;
		i++;
	}

	return (newarray);
}
