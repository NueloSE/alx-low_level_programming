#include "main.h"

/**
 * _pow_recursion - compute exponential
 * @x: the exponent
 * @y: the power
 * Return: The exponential of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
