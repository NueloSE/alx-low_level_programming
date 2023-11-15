#include "main.h"

/**
 * _strlen_recursion - computes the length of a string
 * @s: the string
 * Return: number of bytes in the string pointed to by s;
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
