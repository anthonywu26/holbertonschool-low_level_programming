#include <stdio.h>
#include <stdlib.h>

/**
 * main - print sum of passed integers
 * @argc: number of command line args including program name
 * @argv: array of integers to be summed (passed on command line)
 * Return: 0 on success, error code 1 for invalid input
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;
	char *s;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		s = argv[i];
		while (*s != '\0')
		{
			if (*s < '0' || *s > '9')
			{
				printf("Error\n");
				return (1);
			}
			s++;
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
