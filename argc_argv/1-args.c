#include <stdio.h>

/**
 * main - prints num of args
 * @argc: num of command line args including program name
 * @argv: array of command line args as null terminated strings
 * Return: always 0
 */
int main(int argc, char const *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
