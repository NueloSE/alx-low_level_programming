#include "main.h"

/**
 * array_range - A function that creates array of integers.
 * @min: start integer of the array
 * @max: The end integer of the array
 * Return: A pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int size = max - min, i;
	int *arr_ran;

	if (size < 0)
		return (NULL);

	arr_ran = malloc(sizeof(int) * (size + 1));

	if (arr_ran == NULL)
		return (NULL);

	for (i = 0; i <= size; i++, min++)
	{
		arr_ran[i] = min;
	}
	
	return (arr_ran);
}
