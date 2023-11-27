#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: a pointer to the dog struct
 * @name: name of dog
 * @age: the age of the dog
 * @owner: the name of the owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
