#include "main.h"

/**
 * swap_int - swaps 2 numbers
 * @a: first number
 * @b: the second number
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
