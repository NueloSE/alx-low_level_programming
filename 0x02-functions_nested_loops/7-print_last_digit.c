#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 * Return: Always 1 on success
 */

int print_last_digit(int n)
{
	int l_digit = (n % 10);

	if (l_digit < 0)
		l_digit = l_digit * -1;
	_putchar('0' + l_digit);
	return (l_digit);
}
