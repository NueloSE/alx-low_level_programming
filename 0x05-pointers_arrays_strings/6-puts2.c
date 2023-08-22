#include "main.h"

/**
 * puts2 - prints a string to standard out using a space of two
 * @str: the string to be printed
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i]; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
