#include "main.h"

/**
 * _puts - A function that prints a string followed by a new line to the stdout
 * @str: the string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
