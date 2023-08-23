#include "main.h"

/**
 * print_array - prints a specific numb of char to stdout
 * @a: the string
 * @n: the number
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i <= n; i++)
	{
		if (i != n)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
