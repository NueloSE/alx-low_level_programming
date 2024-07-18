#include "search_algos.h"

/**
 * first_occurence - get the first occurence of a number in an array
 * @array: the array to check for first occurence
 * @num: the number to search for it first occurence
 * Return: The index of the first occurence on success. Otherwise -1
*/

int first_occurence(int *array, int num)
{
	if (num == -1)
		return (-1);
	if (array[num] != array[num - 1])
		return (num);
	return (first_occurence(array, num - 1));
}

/**
 * binary_search3 - implement binary search using recurrsion
 * @array: an array of integers
 * @start: pointer to the first element of an array to search
 * @end: the size of the array
 * @value: the value to search for in the array
 * Return: the index of value on success. Otherwise -1
*/

int binary_search3(int *array, size_t start, size_t end, int value)
{
	int mid, first_mid;
	size_t i;

	if (start > end)
		return (-1);
	printf("Searching in array:");
	for (i = start; i <= end; i++)
	{
		printf(" %d", array[i]);
		if (i != end)
			printf(",");
		else
			printf("\n");
	}
	mid = (start + end) / 2;
	if (array[mid] == value)
	{
		first_mid = first_occurence(array, mid);
		if (first_mid == -1)
			return (mid);
		return (first_mid);
	}

	else if (array[mid] > value)
		end = mid - 1;

	else if (array[mid] < value)
		start = mid + 1;

	return (binary_search3(array, start, end, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: array of integers to be searched
 * @size: the length of the array
 * @value: the value to be searched for in an array
 * Return: the index of value on success. Otherwise -1
*/

int advanced_binary(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1;

	if (size == 0 || array == NULL)
		return (-1);
	return (binary_search3(array, start, end, value));
}
