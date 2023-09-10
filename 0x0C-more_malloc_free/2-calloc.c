#include "main.h"

/**
 * _calloc - A function that allocates memory of an array using malloc
 * @nmemb: The size of the array
 * @size: The size of each block in the array
 * Return: A void pointer to the created array. Otherwise NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int len = nmemb * size;

	if (len == 0)
		return (NULL);

	ptr = malloc(len);

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
