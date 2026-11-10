#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *@str: pointer to a string
 *Return: pointer to the result
 */
char *string_toupper(char *str)
{
	char *output;

	output = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str += ('A' - 'a');
		str++;
	}

	return (output);
}
