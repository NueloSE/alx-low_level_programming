#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: The passed name to the function
 * @f: The function pointed to
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
