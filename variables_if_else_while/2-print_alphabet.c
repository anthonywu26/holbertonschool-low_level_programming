#include <stdio.h>

/**
 * main - print the alphabet.
 * Return: 0 if successful
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter++);
	}
	putchar('\n');

	return (0);
}
