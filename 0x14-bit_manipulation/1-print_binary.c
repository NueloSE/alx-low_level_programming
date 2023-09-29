#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int shifter = (sizeof(n) * 8) - 1;
	int found_one = 0;

	while (shifter >= 0)
	{
		if ((n >> shifter) & 1)
		{
			_putchar('1');
			found_one = 1;
		}
		else if (found_one)
			_putchar('0');

		shifter--;
	}

	if (!found_one)
		_putchar('0');

	/*_putchar('\n');*/
}
