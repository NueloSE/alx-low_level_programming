#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function given as a parameter
 * on each element of an array
 * @array: The passed array
 * @size: Size of the array
 * @action: The pointer to the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array != NULL && action != NULL)
		{
			action(array[i]);
		}
	}
}
