#include "main.h"
#include <stdbool.h>

/**
 * cap_string - capitalizes all words of a string
 *@str: pointer to a string
 *Return: pointer to the result
 */
char *cap_string(char *str)
{
	char *output;
	bool inside_word;

	output = str;
	inside_word = false;

	while (*str != '\0')
	{
		if (!inside_word && !is_seperator(*str))
		{
			if (*str >= 'a' && *str <= 'z')
				*str += 'A' - 'a';

			inside_word = true;
		}
		else if (inside_word && is_seperator(*str))
		{
			inside_word = false;
		}

		str++;
	}

	return (output);
}

/**
 * is_seperator - detect presence of a word seperator
 *@c: character
 *Return: 1 if c is seperator, 0 otherwise
 */
int is_seperator(char c)
{

	if (c == '\n' || c == ' ' || c == '\t')
		return (1);

	if (c == ',' || c == ';' || c == '.')
		return (1);

	if (c == '!' || c == '?' || c == '"')
		return (1);

	if (c == '(' || c == ')' || c == '{' || c == '}')
		return (1);

	return (0);
}
