#include "main.h"

/**
 * times_table - prints the 9 times tables
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 0)
				int_print_padded(i * j, 1, ' ');
			else
				int_print_padded(i * j, 3, ' ');

			if (j != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}

/**
 * int_print_padded - print integer left padded by a seperator
 * @n: integer
 * @padding: width of the padding, must be less than 20
 * @seperator: character to use for padding
 */
void int_print_padded(int n, int padding, char seperator)
{
	int i, digit;
	char buffer[20];

	for (i = 0; i < padding; i++)
	{
		digit = _abs(n % 10);
		n /= 10;

		if (digit == 0 && n == 0 && i != 0)
		{
			buffer[i] = seperator;
			continue;
		}

		buffer[i] = (char) digit + '0';
	}

	while (i > 0)
		_putchar(buffer[--i]);
}

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
