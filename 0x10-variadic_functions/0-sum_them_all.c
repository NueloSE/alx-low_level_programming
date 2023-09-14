#include "variadic_functions.h"

/**
 * sum_them_all - Sums all the parameter passed to the function
 * @n: The number of parameter passed
 * Return: Sum on success. Otherwise 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);
	return (sum);
}
