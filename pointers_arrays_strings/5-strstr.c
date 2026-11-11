#include "main.h"
#include <stdio.h>

#define MAX_PATTERN_LENGTH 4096 /* we havent learnt malloc yet */

/**
 * _strstr - locates a substring
 *@haystack: pointer to string to search
 *@needle: pointer to string to find
 *Return: pointer to found substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int lps[MAX_PATTERN_LENGTH];
	unsigned int i;
	unsigned int j;
	unsigned int haystack_length;
	unsigned int needle_length;

	i = 0;
	j = 0;
	haystack_length = (unsigned int) _strlen(haystack);
	needle_length = (unsigned int) _strlen(needle);

	if (needle_length == 0)
		return (haystack);

	longest_prefix_suffix(needle, lps);

	while (i < haystack_length)
	{
		if (haystack[i] == needle[j])
		{
			i++;
			j++;
			if (j == needle_length)
				return (&haystack[i] - needle_length);
		}
		else
		{
			if (j == 0)
				i++;
			else
				j = lps[j - 1];
		}
	}

	return (NULL);
}

/**
 * longest_prefix_suffix - find longest prefix suffix of a string
 *@s: pointer to a string
 *@lps: pointer to lps array
 */
void longest_prefix_suffix(char *s, unsigned int *lps)
{
	unsigned int i;
	unsigned int j;
	unsigned int s_length;

	i = 0;
	j = 1;
	s_length = (unsigned int) _strlen(s);

	while (j < s_length)
	{
		if (s[i] == s[j])
		{
			lps[j++] = ++i;
		}
		else
		{
			if (i == 0)
				lps[j++] = 0;
			else
				i = lps[i - 1];
		}
	}
}

/**
 * _strlen - returns the length of a string
 *@s: pointer to a string
 *Return: integer length of string
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s++ != '\0')
	{
		length++;
	}

	return (length);
}
