#include <stdio.h>

/**
 * main - print the one digit numbers seperated by commas.
 * Return: 0 if successful
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar((char) n++ + '0');
		if (n != 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
