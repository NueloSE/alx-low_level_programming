#include "main.h"

/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: The size of the space
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
