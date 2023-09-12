#include "dog.h"

/**
 * free_dog - A function that frees a struct
 * @d: A pointer to the struct datatype
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
