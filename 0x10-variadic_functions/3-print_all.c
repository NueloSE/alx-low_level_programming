#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: is a list of types of arguments passed to the function
 * Return: void
*/

void print_all(const char *format, ...)
{
	int i = 0, j = 0;
	va_list ap;
	handlers printers[] = {
		{'i', handle_int},
		{'c', handle_char},
		{'s', handle_string},
		{'f', handle_float},
		{'0', NULL},
	};

	if (format == NULL)
		return;

	va_start(ap, format);

	while (format[i])
	{
		j = 0;
		while (printers[j].str != 0)
		{
			if (printers[j].str == format[i])
			{
				printers[j].printer(ap);
				if (format[i + 1] != '\0')
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}


/**
 * handle_int - prints integer value to stdout
 * @ap: a variadic list
 * Return: void
*/

void handle_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * handle_char - prints character to the stdout
 * @ap: a variadic list
 * Return: void
*/

void handle_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * handle_float - prints float value to the stdout
 * @ap: a variadic list
 * Return: void
*/

void handle_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * handle_string - prints string to the stdout
 * @ap: variadic list
 * Return: void
*/

void handle_string(va_list ap)
{
	printf("%s", va_arg(ap, char *));
}
