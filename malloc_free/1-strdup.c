#include <stdlib.h>
#include "main.h"

/**
 * _strdup - creates char array and initialize with given string
 *@str: pointer to str to be duplicated
 *Return: pointer to created array, NULL on malloc error
 */
char *_strdup(char *str)
{
	int length;
	int i;
	char *newstr;

	if (!str)
		return (NULL);

	length = _strlen(str) + 1;

	newstr = malloc(length);
	if (!newstr)
		return (NULL);

	i = 0;
	while (i < length)
	{
		newstr[i] = str[i];
		i++;
	}

	return (newstr);
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
