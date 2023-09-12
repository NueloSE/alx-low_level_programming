#include "dog.h"

/**
 * print_dog - A function that prints a struct dog
 * @d: A pointer to the dog struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: ");
	if (d->name == NULL)
		printf("(nil)\nAge: %6f\nOwner: ", d->age);
	else
		printf("%s\nAge: %6f\nOwner: ", d->name, d->age);

	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->owner);
}
