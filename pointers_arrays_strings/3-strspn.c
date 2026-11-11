#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *@s: pointer to a string
 *@accept: pointer to array of accepted characters
 *Return: number of occurences of accepted char in s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	unsigned int i;

	count = 0;

	while (s[count] != '\0')
	{
		i = 0;

		while (accept[i] != '\0')
		{
			if (s[count] == accept[i])
			{
				count++;
				break;
			}
			i++;
		}

		if (accept[i] == '\0')
			return (count);
	}

	return (count);
}
