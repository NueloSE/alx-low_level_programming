#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings passed as argument to stdout
 * @separator: The string to be printed between the strings
 * @n: The number of argument passed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int i;
	char *str;

	va_start(strs, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strs, char *);

		if (str == NULL)
			str = "(nil)";
		if (i != (n - 1) && separator != NULL)
			printf("%s%s", str, separator);
		else
			printf("%s", str);
	}
	printf("\n");
}
