#include "function_pointers.h"

/**
  * int_index - A function that searches for an integer
  * @array: The array containing the integers
  * @size: The number of element in the array
  * @cmp: A pointer to the function to be used to compare values
  *
  * Return: The position of the passed integer. Otherwise -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
