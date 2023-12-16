#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the number
 * @index: the index to change starting from 0 of the bit you want to set
 * Return: 1 on success. Otherwise -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
