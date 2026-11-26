#include <stdio.h>
#include <stdlib.h>

/**
 * main - a command line multiplication program
 * @argc: number of command line args including program name
 * @argv: array of command line args as null terminated strings
 * Return: 0 on success, error code 1 for invalid input
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
