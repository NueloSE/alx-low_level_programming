#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of the memory
 * Return: a pointer to the allocate memory
*/

void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
		exit(98);
	return (memory);
}
