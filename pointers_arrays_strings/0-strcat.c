#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 *@dest: pointer to destination
 *@src: pointer to source
 *Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *output;

	output = dest;
	dest += _strlen(dest);

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return (output);
}

/**
 * _strlen - returns the length of a string
 *@s: pointer to a string
 *Return: integer length of string
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s++ != '\0')
	{
		length++;
	}

	return (length);
}
