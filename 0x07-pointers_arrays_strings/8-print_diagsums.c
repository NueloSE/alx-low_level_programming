#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum two diagonals of a square matrix
 * @a: 2 dimensional array of integers
 * @size: size of the 2d array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int r_sum = 0, i, l_sum = 0;

	for (i = 0; i < size; i++)
	{
		l_sum += a[i];
		if (i == size - 1)
			break;
		a += size;
	}
	for (i = 0; i < size; i++)
	{
		r_sum += a[i];
		a -= size;
	}
	printf("%d, %d\n", l_sum, r_sum);
}
