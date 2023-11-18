#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: the number
 * Return: 1 if n is prime. Otherwise 0
 */

int is_prime_number(int n)
{
	if (n < 0)
		n = n * -1;
	if (n == 0 || n == 1)
		return (0);
	return (prime_checker(n, n - 1));
}

/**
 * prime_checker - preforms prime arthmetic
 * @n: the number
 * @i: number reduce by 1 during every call
 * Return: 0 if n % 2 equal 0. Otherwise 1
 */

int prime_checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_checker(n, i - 1));
}
