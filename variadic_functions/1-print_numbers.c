#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints provided numbers with a seperator
 * @separator: character to seperate numbers
 * @n: the number of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
