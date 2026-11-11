#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - find 1st occurrence in string s of any byte in string accept
 *@s: pointer to a string
 *@accept: pointer to array of accepted characters
 *Return: pointer to first occurence
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return (NULL);
}
