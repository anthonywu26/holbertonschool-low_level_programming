#include <stdio.h>
#include <stdbool.h>

/**
 * main - fizzbuzz program
 * Description: Prints a whole lotta fizzes and buzzes.
 * Return: 0 if successful.
*/
int main(void)
{
	int n;
	bool printed;

	for (n = 1; n <= 100; n++)
	{
		printed = false;

		if (n % 3 == 0)
		{
			printf("Fizz");
			printed = true;
		}

		if (n % 5 == 0)
		{
			printf("Buzz");
			printed = true;
		}

		if (!printed)
			printf("%d", n);

		if (n != 100)
			printf(" ");

	}
	printf("\n");

	return (0);
}
