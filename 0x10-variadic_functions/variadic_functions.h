#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#define HANDLER_SIZE 4

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct handler - prints different format specifiers
 * @str: a charcter that specifies the format
 * @printer: function pointer to the function that prints a specific format
*/
typedef struct handler
{
	char str;
	void (*printer)(va_list);
} handlers;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void handle_int(va_list);
void handle_char(va_list);
void handle_float(va_list);
void handle_string(va_list);

#endif /* VARIADIC_FUNCTIONS_H*/
