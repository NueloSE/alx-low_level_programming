#include "main.h"

/**
 * _isdigit- a function that checks digit
 *  @c:the character to check
 *  Return: Always 1 on success otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
