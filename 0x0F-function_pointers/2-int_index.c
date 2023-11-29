#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: array to search for the integer
 * @size: size of the array
 * @cmp: a pointer to a function
 * Return: index of the first element for which the cmp function
 * does not return 0. (-1)	 if no element matches or size <= 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
