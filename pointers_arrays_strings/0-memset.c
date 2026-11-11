#include "main.h"

/**
 * _memset - fills n bytes of the memory pointed to by s with  byte b
 *@s: pointer to start address
 *@b: value to be set
 *@n: number of bytes to fill
 *Return: pointer to the result
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
