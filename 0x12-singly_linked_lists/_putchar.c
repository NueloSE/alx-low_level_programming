#include "lists.h"

/**
 * _putchar - prints a passed string to the stdout
 * @c: the character to be printed
 * Return: On success 1. Otherwise, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
