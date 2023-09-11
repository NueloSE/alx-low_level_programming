#include "dog.h"

/**
 * init_dog - A function that initialize a variable of type struct dog
 * @d: A point to the variable holding data
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
