#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array to search
 * @size: the number of element in array
 * @value: the value to search for
 * Return: first index where value is located on success. Otherwise -1
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos;

	if (size == 0 || array == NULL)
		return (-1);

	while ((low <= high) && (value >= array[low]) && (value <= array[high]))
	{
		pos = low + (
			(((double)(high - low) /
			(array[high] - array[low])) *
			(value - array[low]))
		);
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	printf("Value checked array[%d] is out of range\n", 2109);
	return (-1);
}
