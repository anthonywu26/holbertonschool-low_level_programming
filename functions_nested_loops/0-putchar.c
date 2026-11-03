#include "main.h"

/**
 * main - prints the string _putchar
 * Return: 0 if successful.
*/
int main(void)
{
	char *s = "_putchar\n";

	while (*s)
	{
		_putchar(*s++);
	}

	return (0);
}
