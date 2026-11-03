#include <stdio.h>

/**
 * main - print the alphabet in lower and uppercase.
 * Return: 0 if successful
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter++);
	}

	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter++);
	}
	putchar('\n');

	return (0);
}
