#include <stdio.h>
#include <stdbool.h>

#include "calculator.h"

#define SC_OPERATION_QUIT 0
#define SC_OPERATION_ADD 1
#define SC_OPERATION_SUBTRACT 2
#define SC_OPERATION_MULTIPLY 3
#define SC_OPERATION_DIVIDE 4

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

		if (input < SC_OPERATION_QUIT || input > SC_OPERATION_DIVIDE)
		{
			printf("Invalid choice\n");
			continue;
		}

		if (input == SC_OPERATION_QUIT)
			break;

/* code to handle operations here */
	}

	printf("Bye!\n");
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
