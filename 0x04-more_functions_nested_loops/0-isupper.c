#include "main.h"

/**
 * _isupper- a function that finds uppercase
 *  @c:the character to check
 *  Return: Always 1 on success otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
