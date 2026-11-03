#include "main.h"

/**
 * _isalpha - returns whether char is alphanumeric character
 * @c: character
 * Return: 0 if c is alphanumeric, 1 otherwise
 */
int _isalpha(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
