#include "main.h"

/**
 * puts_half - print the second half of the string
 *@str: pointer to a string
 *Description: start printing from (length_of_the_string + 1) / 2
 */
void puts_half(char *str)
{
	str += (_strlen(str) + 1) / 2;

	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
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
