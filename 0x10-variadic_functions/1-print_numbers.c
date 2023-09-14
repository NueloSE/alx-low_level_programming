#include "variadic_functions.h"

/**
 * print_numbers - A function that prints numbers passed as argument to stdout
 * @separator: The string to be printed between the numbers
 * @n: The number of argument passed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int num;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(nums, int);

		if (i != (n - 1) && separator)
		{
			printf("%d%s", num, separator);
		}
		else
			printf("%d", num);
	}
	printf("\n");
	va_end(nums);
}
