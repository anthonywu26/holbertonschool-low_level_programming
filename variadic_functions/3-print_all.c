#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdlib.h>

/**
 * print_all - print data with formatter to specify types
 * @format: specify types (cifs are allowable)
 */
void print_all(const char * const format, ...)
{
	va_list args;
	bool printed = false;
	unsigned int i;
	unsigned int j;
	char specifiers[] = "cifs";
	void (*print_func[])(va_list) = {
		print_char, print_int, print_float, print_str
	};

	va_start(args, format);
	i = 0;
	while (format && format[i] != '\0')
	{
		j = 0;
		while (j < sizeof(specifiers) - 1)
		{
			if (format[i] == specifiers[j])
			{
				if (printed)
					printf(", ");

				print_func[j](args);
				printed = true;
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);

	printf("\n");
}

/**
 * print_char - prints a char
 * @args: va_list of original function
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints a int
 * @args: va_list of original function
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a floating points
 * @args: va_list of original function
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_str - prints a string
 * @args: va_list of original function
 */
void print_str(va_list args)
{
	char *s;

	s = va_arg(args, char*);
	printf("%s", s ? s : "(nil)");
}
