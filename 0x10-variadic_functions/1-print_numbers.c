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

	if (n)
	{
		va_start(nums, n);

		for (i = 0; i < n; i++)
		{
			if (i == (n - 1))
			{
				printf("%d\n", va_arg(nums, int));
				va_end(nums);
				return;
			}

			if (separator == NULL)
				printf("%d", va_arg(nums, int));
			else
				printf("%d%s", va_arg(nums, int), separator);
		}
	}
}
