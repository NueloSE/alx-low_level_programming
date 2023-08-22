#include "main.h"

/**
 * puts2 - prints a string to standard out using a space of two
 * @str: the string to be printed
 * Return: void
 */

void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
