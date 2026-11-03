#include <stdio.h>

/**
 * main - print the one digit numbers.
 * Return: 0 if successful
 */
int main(void)
{
	int n = 0;

	while (n < 10)
		printf("%d", n++);
	putchar('\n');

	return (0);
}
