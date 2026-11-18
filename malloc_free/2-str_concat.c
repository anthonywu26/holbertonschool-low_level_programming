#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 *@s1: pointer to first string
 *@s2: pointer to second string
 *Return: pointer to the result
 */
char *str_concat(char *s1, char *s2)
{
	int length_s1, length_s2;
	char *newstr, *ptr;

	length_s1 = (s1 != NULL) ? _strlen(s1) : 0;
	length_s2 = (s2 != NULL) ? _strlen(s2) : 0;

	newstr = malloc(length_s1 + length_s2 + 1);
	if (!newstr)
		return (NULL);

	ptr = newstr;

	if (s1 != NULL)
	{
		while (*s1 != '\0')
			*ptr++ = *s1++;

	}

	if (s2 != NULL)
	{
		while (*s2 != '\0')
			*ptr++ = *s2++;

	}

	*ptr = '\0';
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
