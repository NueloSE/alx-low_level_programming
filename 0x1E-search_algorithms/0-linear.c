#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using linear search
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index of value on success otherwise -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (size != 0 && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
		}
	}
	return (-1);
}
