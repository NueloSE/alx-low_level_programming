#include "main.h"

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: the specific char
 * Return: pointer to the array. Otherwise NULL
*/

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);
	unsigned int i;

	if (arr == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
