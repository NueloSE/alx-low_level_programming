#include "main.h"

/**
 * create_array - A function that creates an array of chars
 * @size: the size of the array to be created
 * @c: the character to initialize the array with.
 * Return: Null if size is 0 or pointer fails else pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	ptr = (char *) malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (; i < size; i++)
		*(ptr + i) = c;
	return (ptr);
	free(ptr);
}
