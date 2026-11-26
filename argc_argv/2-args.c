#include <stdio.h>

/**
 * main - prints all command line args
 * @argc: num of command line args including program name
 * @argv: array of command line args as null terminated strings
 * Return: always 0
 */
int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
