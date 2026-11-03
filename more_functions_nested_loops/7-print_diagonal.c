#include "main.h"

/**
 * print_diagonal - print a diagonal of specified width
 *@n: specified integer width
 */
void print_diagonal(int n)
{
	int row, i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < n; row++)
	{
		for (i = 0; i < row; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
