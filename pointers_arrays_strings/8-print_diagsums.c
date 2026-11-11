#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 *@a: pointer to start of integer matrix, passed as flattened 1D array
 *@size: dimensions of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_diag;
	int sum_backdiag;

	sum_diag = 0;
	sum_backdiag = 0;

	for (i = 0; i < size; i++)
	{
		sum_diag += *(a + i * size + i);
		sum_backdiag += *(a + i * size + size - 1 - i);
	}

	printf("%d, %d\n", sum_diag, sum_backdiag);
}
