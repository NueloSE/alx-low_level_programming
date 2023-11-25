#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: lower range of array
 * @max: upper range of array
 * Return: a pointer to the newly created array on success. Otherwise NULL
*/

int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
		return (NULL);
	size = (max - min);
	array = malloc((size + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= size; i++, min++)
		(array[i]) = min;
	return (array);
}
