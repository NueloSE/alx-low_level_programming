#include "main.h"

/**
 * print_rev - print a string in reversed format
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		;
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
