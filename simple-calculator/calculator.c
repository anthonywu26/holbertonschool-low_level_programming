#include <stdio.h>
#include <stdbool.h>

#include "calculator.h"

#define SC_OPERATION_QUIT 0
#define SC_OPERATION_ADD 1
#define SC_OPERATION_SUBTRACT 2
#define SC_OPERATION_MULTIPLY 3
#define SC_OPERATION_DIVIDE 4

#define SC_EINVAL 1

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

	printf("Simple Calculator\n1) Add\n2) Subtract\n"
	       "3) Multiply\n4) Divide\n0) Quit\n");

	while (true)
	{
		printf("Choice: ");

		if (scanf("%d", &input) != 1 || getchar() != '\n')
		{
		/**
		  * this block executes if user enters anything other
		  * than exactly an integer followed by a newline.
		  */
			printf("Invalid choice\n");
			sc_userinput_trim();
			continue;
		}

		if (input == SC_OPERATION_QUIT)
			break;

		sc_operation_process(input);
	}

	printf("Bye!\n");
	return (0);
}

/**
 * sc_operation_process - performs calculator operation according to input
 *Description: Checks that oper_type is a valid opertaion.
 * To perform the operation, the calculator prompts the user
 * for integer values a and b, and then prints the result of
 * operating on these values.
 *@oper_type: user selected operation type
 */
void sc_operation_process(int oper_type)
{
	int operand_a;
	int operand_b;

	if (oper_type < SC_OPERATION_QUIT || oper_type > SC_OPERATION_DIVIDE)
	{
		printf("Invalid choice\n");
		return;
	}

	if (sc_userinput_getoperands(&operand_a, &operand_b))
		return;

	if (oper_type == SC_OPERATION_ADD)
	{
		printf("Result: %d\n", operand_a + operand_b);
		return;
	}

	if (oper_type == SC_OPERATION_SUBTRACT)
	{
		printf("Result: %d\n", operand_a - operand_b);
		return;
	}

	if (oper_type == SC_OPERATION_MULTIPLY)
	{
		printf("Result: %d\n", operand_a * operand_b);
		return;
	}
}

/**
 * sc_userinput_getoperands - prompt user for a and b
 *@a: pointer to address where a is to be written
 *@b: pointer where b is written
 *Return: 0 if successful, SC_EINVAL if user input is
 * invalid (not an accepted integer operand for both a and b
 */
int sc_userinput_getoperands(int *a, int *b)
{
	printf("A: ");

	if (scanf("%d", a) != 1 || getchar() != '\n')
	{
		printf("Invalid integer operand\n");
		sc_userinput_trim();
		return (SC_EINVAL);
	}

	printf("B: ");

	if (scanf("%d", b) != 1 || getchar() != '\n')
	{
		printf("Invalid integer operand\n");
		sc_userinput_trim();
		return (SC_EINVAL);
	}

	return (0);
}

/**
 * sc_userinput_trim - cleanup any trailing user input
 * Description: Consumes any remaining characters in stdin up to and
 * including the next newline.
 */
void sc_userinput_trim(void)
{
	while (getchar() != '\n')
		;
}
