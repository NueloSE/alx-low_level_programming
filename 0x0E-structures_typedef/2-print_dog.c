#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: the struct to be printed
 * Return: void
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwer: %s\n", d->name, d->age, d->owner);
}
