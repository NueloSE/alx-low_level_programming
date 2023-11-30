#include "3-calc.h"

/**
 * op_add - computes the sum of two integer
 * @a: integer 1
 * @b: integer 2
 * Return: sum of a and b on success
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - computes the difference of two integer
 * @a: integer 1
 * @b: integer 2
 * Return: the difference of a and b on success
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - computes the multiplication of two integers
 * @a: integer 1
 * @b: integer 2
 * Return: the multiplication of a and b on success
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - computes the division of two integers
 * @a: integer 1
 * @b: integer 2
 * Return: the division of a by b on success
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - computes the modulo division of two integers
 * @a: integer 1
 * @b: integer 2
 * Return: the modulo division of a by b on success
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
