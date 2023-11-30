#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: a separator between each string
 * @n: the number of element in the string
 * Return: Nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list mylist;

	if (n == 0)
		return;
	va_start(mylist, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(mylist, int));
		if (i + 1 != n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(mylist);
}
