#include "main.h"

/**
 * _atoi - convert a string to an integer
 *@s: pointer to a string
 *Return: First integer that occurs within the string.
 */
int _atoi(char *s)
{
	int count_minuses;
	int number;

	number = 0;
	count_minuses = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			count_minuses++;
		}
		else if (*s >= '0' && *s <= '9')
		{
			number *= 10;
			number -= (int) (*s - '0');
		}
		else if (number != 0)
		{
			break;
		}

		s++;
	}

	if (count_minuses % 2 == 0)
		number *= -1;

	return (number);
}
