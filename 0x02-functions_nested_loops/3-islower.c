#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the string whose case is checked
 * Return: Always 0 on success
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
