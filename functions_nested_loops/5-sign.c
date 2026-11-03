#include "main.h"

/**
 * print_sign - prints the sign of an integer
 * @n: integer
 * Return: 0 if n is zero, 1 if positive, -1 if negative.
*/
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
