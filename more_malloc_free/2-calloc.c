#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates zero initialised memory
 *@nmemb: number of elements
 *@size: size of each element in bytes
 *Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *buffer;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	buffer = malloc(size * nmemb);
	if (!buffer)
	{
		return (NULL);
	}

	for (i = 0; i < size * nmemb; i++)
		buffer[i] = 0;

	return ((void *) buffer);
}
