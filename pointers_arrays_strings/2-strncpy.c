#include "main.h"

/**
 * _strncpy - copies a string
 *@dest: pointer to destination
 *@src: pointer to source
 *@n: number of char to copy from source
 *Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *output;
	int i;

	output = dest;
	i = 0;

	while (*src != '\0' && i < n)
	{
		*dest++ = *src++;
		i++;
	}

	while (i < n)
	{
		*dest++ = '\0';
		i++;
	}

	return (output);
}
