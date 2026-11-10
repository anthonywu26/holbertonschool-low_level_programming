#include "main.h"

#define MAX_STR_SIZE 4096

/**
 * rev_string - reverses a string
 *@s: pointer to a string
 */
void rev_string(char *s)
{
	int length;
	int i;
	char tmp;

	length = _strlen(s);

	for (i = 0; i < length / 2; i++)
	{
		tmp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = tmp;
	}
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
