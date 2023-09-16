#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @array: The array containing the integers
 * @size: The number of element in the array
 * @cmp: A pointer to the function to be used to compare values
 * Return: The position of the passed integer. Otherwise -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ret_val;

	/*if (array != NULL)*/
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		ret_val = cmp(array[i]);

		if (ret_val != 0)
			return (i);
	}
	return (-1);
}
