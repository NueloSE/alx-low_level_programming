#include "search_algos.h"

/**
 * binary_search2 - implement binary search algorithm
 * @array: pointer to the first element in the array to search
 * @start: where the sub array search starts
 * @end: where the sub array ends
 * @value: the value to search for
 * Return: the first index of value on success. Otherwise -1
*/

int binary_search2(int *array, size_t start, size_t end, int value)
{
	size_t left = start, right = end, middle, i;

	while (left <= right)
	{
		printf("Searching in array:");
			for (i = left; i <= right; i++)
			{
				printf(" %d", array[i]);
				if (i != right)
					printf(",");
				else
					printf("\n");
			}
		middle  = (left + right) / 2;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using exponential search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, min, max;

	if (size == 0 || array == NULL)
		return (-1);
	if (array[0] == value)
	{
		printf("Value checked array[%d] = [%d]\n", 0, array[0]);
		return (0);
	}

	while ((i < size - 1) && (array[i] <= value))
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value || array[i] >= value)
		{
			break;
		}
		i = i * 2;
	}

	min = i / 2;
	max = ((size - 1) < i) ? (size - 1) : i;
	printf("Value found between indexes [%ld] and [%ld]\n", min, max);


	return (binary_search2(array, min, max, value));
}
