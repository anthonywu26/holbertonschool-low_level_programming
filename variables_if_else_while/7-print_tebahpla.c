#include <stdio.h>

/**
 * main - print the alphabet.
 * Return: 0 if successful
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter--);
	}
	putchar('\n');

	return (0);
}
