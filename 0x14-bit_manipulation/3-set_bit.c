#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number
 * @index: the index starting from 0 of the bit you want to set
 * Return: 1 on success. Otherwise -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int converter;

	if (index < sizeof(unsigned int) * 8)
	{
		converter = 1 << index;
		*n = *n | converter;
		return (1);
	}
	return (-1);
}
