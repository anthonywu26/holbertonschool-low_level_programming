#include "main.h"

/**
 * print_numbers - print the one digit numbers.
 */
void print_numbers(void)
{
	int n = 0;

	while (n < 10)
		_putchar((char) n++ + '0');
	_putchar('\n');
}
