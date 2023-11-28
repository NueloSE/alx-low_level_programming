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
		printf("Name: %s\nAge: %f\nOwer: %s\n", "(nil)", d->age, d->owner);
	else if (d->owner == NULL)
		printf("Name: %s\nAge: %f\nOwer: %s\n", d->name, d->age, "(nil)");
	else
		printf("Name: %s\nAge: %f\nOwer: %s\n", d->name, d->age, d->owner);
}
