#include "variadic_functions.h"

/**
 * sum_them_all - computes the sum of all its parameters
 * @n: variadic array of characters
 * Return: the sum of all parameter on success. otherwise 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list mylist;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(mylist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(mylist, int);
	}

	va_end(mylist);
	return (sum);
}
