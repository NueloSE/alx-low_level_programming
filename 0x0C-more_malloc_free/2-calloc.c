#include "main.h"

/**
 * _calloc - A function that allocates memory of an array using malloc
 * @nmemb: The size of the array
 * @size: The size of each block in the array
 * Return: A void pointer to the created array. Otherwise NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int len = nmemb * size, i;

	if (len == 0)
		return (NULL);

	array = malloc(len);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		array[i] = 0;

	return (array);
}
