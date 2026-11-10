#include "main.h"

/**
 * _strncat - concatenates two string, up to limited number of char
 *@dest: pointer to destination
 *@src: pointer to source
 *@n: limit on number of char to copy from src
 *Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *output;
	int count;

	count = 0;
	output = dest;
	dest += _strlen(dest);

	while (*src != '\0' && count < n)
	{
		*dest++ = *src++;
		count++;
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
