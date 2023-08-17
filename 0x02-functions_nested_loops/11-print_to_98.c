#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - prints matural num for n to 98
 * Return : void
 */

void print_to_98(int n)
{
	if (n == 98)
		printf("%d", n);
	else if (n < 98)
	{
		for (;n <= 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (; n >= 98; n--)
			printf("%d, ", n);
	}
	printf("\n");
}
