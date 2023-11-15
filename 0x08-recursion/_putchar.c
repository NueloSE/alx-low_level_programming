#include "main.h"

/**
 * _putchar - prints a character to the standard output
 * @c: the character to be printed
 * Return: 0 on success. 1 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
