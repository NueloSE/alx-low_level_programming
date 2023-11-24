#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: array size
 * @size: element size
 * Return: pointer to the allocated memory on success.
 * Otherwise NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size;
	void *result;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;
	result = malloc(total_size);
	if (result == NULL)
		return (NULL);
	return (result);
}
