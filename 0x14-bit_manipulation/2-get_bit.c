#include "main.h"

/**
 * get_bit - computes the value of a bit at a given index
 * @n: the number
 * @index: the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index on success. Otherwise -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int result = -1;

	if (index < (sizeof(unsigned long int) * 8))
		result = (n >> index) & 1;
	return (result);
}
