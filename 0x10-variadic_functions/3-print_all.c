#include "variadic_functions.h"

/**
 * print_char - prints character to stdout
 * @list: The character to be printed
 * Return: Alway void
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}


/**
 * print_int - prints integer to stdout
 * @list: The number to be printed to the stdout
 * Return: Always void
 */

void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - prints float value passed to the stdout
 * @list: The float number to be printed to the stdout
 * Return: Always void
 */

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_string - prints a string passed to the stdout
 * @list: The passed string
 * Return: Always void
 */

void print_string(va_list list)
{
	char *str = va_arg(list, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}


/**
 * print_all - A function that prints anything passed
 * @format: The format type to be printed
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int j = 0, i = 0;
	char *str = "";

	fun_call functions[] = {
		{"s", print_string},
		{"c", print_char},
		{"i", print_int},
		{"f", print_float}
	};

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		while (j <= 3)
		{
			if (format[i] == *(functions[j].s))
			{
				printf("%s", str);
				functions[j].func(args);
				str = ", ";
				break;
			}
			j++;
		}
		j = 0;

		i++;
	}
	printf("\n");
	va_end(args);
}
