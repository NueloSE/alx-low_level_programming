#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct func_call - A structure that hold a string & a pointer to a function
 * @s: The string
 * @func: pointer to a function
 */

typedef struct func_call{
	char *s;
	void (*func)(va_list);
} fun_call;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list list);
void print_int(va_list list);
void print_float(va_list list);
void print_string(va_list list);

#endif /* VARIADIC_FUNCTIONS_H */
