#include "main.h"

/**
 * _strcpy - copies src to dest, including null terminator
 *@dest: pointer to destination string buffer
 *@src: pointer to source string buffer
 *Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *output;

	output = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = *src;

	return (output);
}
