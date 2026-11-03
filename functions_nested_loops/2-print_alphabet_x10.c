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

/**
 * print_alphabet_x10 - print the lowercase alphabet
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
		print_alphabet();
}
