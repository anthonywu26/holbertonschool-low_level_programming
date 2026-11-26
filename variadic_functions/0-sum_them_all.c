#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - add all passed args together
 * @n: the number of args
 * Return: the sum of the passed ints
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	sum = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
