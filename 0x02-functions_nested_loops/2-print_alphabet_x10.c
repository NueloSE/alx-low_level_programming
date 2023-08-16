#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int num = 0;
	char str = 'a';

	for (; num <= 9 ; num++)
	{
		while (str <= 'z')
		{
			_putchar(str);
			str++;
		}
		_putchar('\n');
		str = 'a';
	}
}
