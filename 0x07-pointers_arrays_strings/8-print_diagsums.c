#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - prints the sum of the two
 *diagonals of a square matrix of integers
 *@a: input
 *@size: input
 *Return: 0
 */
void print_diagsums(int *a, int size)
{
	int sumDiag1, sumDiag2, i;

	sumDiag1 = 0;
	sumDiag2 = 0;

	for (i = 0; i < size; i++)
	{
		sumDiag1 += a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sumDiag2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sumDiag1, sumDiag2);
}
