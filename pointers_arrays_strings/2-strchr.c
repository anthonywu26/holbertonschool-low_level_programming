#include <stdio.h>
#include "main.h"

/**
 * _strchr - find first occurrence of the character c in the string s
 *@s: pointer to a string
 *@c: character to search for
 *Return: pointer to found character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}

	if (*s == '\0')
	{
		if (c == '\0')
			return (s);

		return (NULL);
	}

	return (s);
}
