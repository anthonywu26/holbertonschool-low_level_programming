#include "main.h"

/**
 * _isalpha - returns whether char is alphabetic character
 * @c: character
 * Return: 0 if c is alphabetic, 1 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
