#include "main.h"

/**
 * leet - replace aeotl with 43071 respectively
 *@str: pointer to string on which transform is to be applied
 *Return: pointer to the result
 */
char *leet(char *str)
{
	char domain[] = "aeotlAEOTL";
	char codomain[] = "4307143071";
	int i;
	char *output;

	output = str;

	while (*str != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (*str == domain[i])
				*str = codomain[i];
		}

		str++;
	}

	return (output);
}
