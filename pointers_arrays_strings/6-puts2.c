#include "main.h"

/**
 * puts2 - print every other char of a string starting with the first char
 *@str: pointer to a string
 */
void puts2(char *str)
{
	int i;

	i = 0;

	while (*str != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*str);
		}
		i++;
		str++;
	}
	_putchar('\n');
}
