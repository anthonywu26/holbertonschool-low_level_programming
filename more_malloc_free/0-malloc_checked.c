#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - malloc wrapper
 *@b: number of bytes to allocate
 *Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *tmp = malloc(b);

	if (!tmp)
		exit(98);
	return (tmp);
}
