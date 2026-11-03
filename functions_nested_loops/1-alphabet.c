#include "main.h"

/**
 * print_alphabet - print the lowercase alphabet
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter++);
	}
	_putchar('\n');
}
