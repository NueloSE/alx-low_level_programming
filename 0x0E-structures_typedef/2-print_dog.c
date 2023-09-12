#include "dog.h"

/**
 * print_dog - A function that prints a struct dog
 * @d: A pointer to the dog struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	char empty[] = "(nill)";

	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = empty;
	if (d->age == '\0')
	{
		printf("Name: %s\nAge: %s\nOwner: %s\n", (*d).name, empty, (*d).owner);
		return;
	}
	if (d->owner == NULL)
		d->owner = empty;

	printf("Name: %s\nAge: %6f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
