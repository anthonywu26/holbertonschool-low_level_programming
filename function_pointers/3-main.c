#include "3-calc.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a calulator using function pointers
 * @argc: number of command line args
 * @argv: array of command line args as null terminated strings
 * Return: 0 on success otherwise error code
 */
int main(int argc, char *argv[])
{
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((op == op_div || op == op_mod) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op(
		atoi(argv[1]),
		atoi(argv[3])
	));

	return (0);
}
