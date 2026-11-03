#include "main.h"

/**
 * _abs - return absolute value of integer
 * @n: integer
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	if (n < 0)
		n *= -1;

	return (n);
}
