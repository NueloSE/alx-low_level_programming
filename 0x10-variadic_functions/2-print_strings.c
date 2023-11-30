#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: a string separating each string
 * @n: the number of string
 * Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list mylist;
	unsigned int i;
	char *word;

	if (separator == NULL)
		separator = "";

	va_start(mylist, n);
	for (i = 0; i < n; i++)
	{
		word = va_arg(mylist, char *);
		if (word == NULL)
			printf("(nil)");
		else
			printf("%s", word);

		if (i + 1 != n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
