#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of square matrix of integers
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int m, n, p, l = 0, r = 0;

	for (m = 0; m < size; m++)
	{
		p = (m * size) + m;
		l += *(a + p);
	}
	for (n = 0; n < size; n++)
	{
		p = (n * size) + (size - 1 - n);
		r += *(a + p);
	}
	printf("%m, %m\n", l, r);
}
