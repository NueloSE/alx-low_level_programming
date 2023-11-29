#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: a pointer to a function
 * Return: Nothing
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
