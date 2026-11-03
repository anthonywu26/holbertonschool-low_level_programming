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

/**
 * print_last_digit - print last digit of integer
 * @n: integer
 * Return: The last digit of the integer.
 */
int print_last_digit(int n)
{
	int last_digit = _abs(n % 10);

	_putchar((char) last_digit + '0');
	return (last_digit);
}
