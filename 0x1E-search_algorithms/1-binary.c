#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integer
 * using binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: the value to search for in the array
 * Return: index where value is located on success. Otherwise -1
*/

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, middle, i;

	if (size != 0 && array != NULL)
	{
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
			middle = (left + right) / 2;

			if (array[middle] == value)
				return (middle);
			else if (array[middle] < value)
				left = middle + 1;
			else if (array[middle] > value)
				right = middle - 1;
		}
	}
	return (-1);
}
