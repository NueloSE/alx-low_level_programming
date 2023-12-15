#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: the number
 * Return: void
*/

void print_binary(unsigned long int n)
{
	/*size in bits*/
	int size = sizeof(unsigned int) * 8;
	int msb_pos, i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/*compute the size of the most significant bit*/
	for (msb_pos = size - 1; msb_pos >= 0; msb_pos--)
	{
		if ((n >> msb_pos) & 1)
			break;
	}

	for (i = msb_pos; i >= 0; i--)
	{
		msb_pos = (n >> i) & 1;
		putchar(msb_pos + '0');
	}
}
