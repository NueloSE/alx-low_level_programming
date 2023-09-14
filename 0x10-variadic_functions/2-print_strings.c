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

	if (n)
	{
		va_start(strs, n);

		for (i = 0; i < n; i++)
		{
			if (i == (n - 1))
			{
				printf("%s\n", va_arg(strs, char *));
				va_end(strs);
				return;
			}

			if (separator == NULL)
				printf("%s", va_arg(strs, char *));
			else
				printf("%s%s", va_arg(strs, char *), separator);
		}
	}
}
