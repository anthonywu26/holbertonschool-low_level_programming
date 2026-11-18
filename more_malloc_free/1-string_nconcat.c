#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *@s1: pointer to the first string
 *@s2: pointer to the second string
 *@n: number of bytes of second string to copy
 *Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int length_s1, i;
	char *newstr;

	length_s1 = (s1 != NULL) ? _strlen(s1) : 0;

	newstr = malloc(length_s1 + n + 1);
	if (!newstr)
		return (NULL);

	if (s1 != NULL)
		for (i = 0; i < length_s1; i++)
			newstr[i] = s1[i];

	i = 0;
	if (s2 != NULL)
		for (; i < (int) n && s2[i] != '\0'; i++)
			newstr[length_s1 + i] = s2[i];

	newstr[length_s1 + i] = '\0';
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
