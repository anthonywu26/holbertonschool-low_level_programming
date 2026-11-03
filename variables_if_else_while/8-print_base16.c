#include <stdio.h>

/**
 * main - print the one digit hex numbers.
 * Return: 0 if successful
 */
int main(void)
{
	int n = 0;
	char symbol;

	while (n < 16)
	{
		if (n < 10)
			symbol = (char) n + '0';
		else
			symbol = (char) n - 10 + 'a';

		putchar(symbol);
		n++;
	}
	putchar('\n');

	return (0);
}
