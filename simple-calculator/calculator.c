#include <stdio.h>
#include <stdbool.h>

#include "calculator.h"

#define SC_OPERATION_QUIT 0
#define SC_OPERATION_ADD 1
#define SC_OPERATION_SUBTRACT 2
#define	SC_OPERATION_MULTIPLY 3
#define	SC_OPERATION_DIVIDE 4

/**
 * main - calculator application
 * Description: Simple calculator that supports addition, subtraction,
 * multiplication and division operations. The user accesses these
 * through an interactive menu. Main contains the main loop for the menu.
 *
 * Return: 0 if successfully exits.
 */
int main(void)
{
	int input;

	printf("Simple Calculator\n1) Add\n2) Subtract\n");
	printf("3) Multiply\n4) Divide\n0) Quit\n");

	while (true)
	{
		printf("Choice: ");

		if (scanf("%d", &input) != 1)
		{
			sc_err_invalidinput();
			continue;
		}

		if (input == SC_OPERATION_QUIT)
			break;
	}

	printf("Bye!\n");
	return (0);
}

/**
 * sc_err_invalidinput - handles cleanup if user enters invalid input
 * Description: Prints error message and consumes remaining characters
 * in stdin buffer up until and including the newline.
 */
void sc_err_invalidinput(void)
{
	printf("Invalid input\n");
	while (getchar() != '\n')
		;
}
