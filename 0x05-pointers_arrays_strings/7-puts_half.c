#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to be printed
 * Rrturn: void
 */

void puts_half(char *str)
{
	int len = 0, half;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 != 0)
		len -= 1;
	half = len / 2;
	while (half < len)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
