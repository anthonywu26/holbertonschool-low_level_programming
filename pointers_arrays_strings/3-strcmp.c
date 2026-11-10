#include "main.h"

/**
 * _strcmp - compares two strings, lexicographic order
 *@s1: pointer to first string
 *@s2: pointer to second string
 *Return: 0 is equal, -1 if s1 < s2, 1 if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int cmp;

	while (*s1 != '\0' && *s2 != '\0')
	{
		cmp = (int) (*s1 - *s2);

		if (cmp != 0)
			return (cmp);

		s1++;
		s2++;
	}

	if (*s1 != '\0')
		return ((int) *s1);

	if (*s2 != '\0')
		return (-(int) *s2);

	return (0);
}
