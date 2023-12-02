#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: is a list of types of arguments passed to the function
 * Return: void
*/

void print_all(const char *format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ap;
	handlers printers[] = {
		{'i', handle_int},
		{'c', handle_char},
		{'s', handle_string},
		{'f', handle_float},
	};
	va_start(ap, format);

	while ((format != NULL) && (format[i]))
	{
		j = 0;
		while ((j < HANDLER_SIZE) && (printers[j].str != format[i]))
			j++;

		if (j < HANDLER_SIZE)
		{
			printf("%s", separator);
			printers[j].printer(ap);
			separator = ", ";
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
	char *s = va_arg(ap, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
