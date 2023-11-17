#include "main.h"

/**
 * _sqrt_recursion - compute the square of a number using recursion
 * @n: the number
 * Return: square root of a number. -1 if no natural square root.
 */

int _sqrt_recursion(int n)
{
	return (compute_sqrt(n, 1, n));
}

/**
 * compute_sqrt - iterate till square root is obtained
 * @num: the number
 * @min: the start of the iteration
 * @max: the end of the iteration
 * Return: the square root of num on success. -1 Otherwise.
 */

int compute_sqrt(int num, int min, int max)
{
	long guess;

	if (max < min)
		return (-1);
	guess = (max + min) / 2;

	if (num == guess * guess)
		return (guess);
	else if ((guess * guess) >= num)
		return (compute_sqrt(num, min, (guess - 1)));
	else
		return (compute_sqrt(num, (guess + 1), max));

}
