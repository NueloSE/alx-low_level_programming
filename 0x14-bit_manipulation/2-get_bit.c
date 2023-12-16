#include "main.h"

/**
 * get_bit - computes the value of a bit at a given index
 * @n: the number
 * @index: the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index on success. Otherwise -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, size = sizeof(unsigned long int) * 8;
	int msbp, result = -1;/*msp-most significant bit position*/

	if (index < size)
	{
		for (msbp = size - 1; msbp >= 0; msbp--)
		{
			if ((n >> msbp) & 1)
				break;
		}
		for (i = msbp; msbp >= 0; i--, msbp--)
		{
			if (i == index)
				result = ((n >> i) & 1);
		}
		return (result);
	}
	return (result);
}
