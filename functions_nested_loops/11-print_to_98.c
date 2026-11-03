#include <stdio.h>

#include "main.h"

/**
 * print_to_98 - prints all numbers from a chosen starting number to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	int direction = -1;

	if (n < 98)
		direction = 1;

	printf("%d", n);
	while (n != 98)
	{
		n += direction;
		printf(", %d", n);
	}
	printf("\n");
}
