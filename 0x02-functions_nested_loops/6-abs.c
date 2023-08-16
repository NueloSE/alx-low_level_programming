#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer
 * Return: Always 0 on success
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
