#include "search_algos.h"

/**
 * jump_search - searches for a value stored in array using jump search
 * @array: pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index of value on success. Otherwise 0
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = (sqrt(size)), lower = 0, upper = step, i;

	if (size != 0 && array !=  NULL)
	{
		while (lower <= size - 1)
		{
			printf("Value checked array[%ld] = [%d]\n", lower, array[lower]);
			if (array[lower] <= value && array[upper] >= value)
			{
				printf("Value found between indexes [%ld] and [%ld]\n", lower, upper);
				for (i = lower; i <= upper; i++)
				{
					printf("Value checked array[%ld] = [%d]\n", i, array[i]);
					if (array[i] == value)
					{
						return (i);
					}
				}
				return (-1);
			}
			if (array[lower] < value && array[upper] < value)
			{
				lower += step;
				upper += step;
			}
		}
		lower -= step, upper -= step;
		printf("Value found between indexes [%ld] and [%ld]\n", lower, upper);
		printf("Value checked array[%ld] = [%d]\n", lower, array[lower]);
		return (-1);
	}
	return (-1);
}
