#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: the struct to be printed
 * Return: void
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		(d->name == NULL) ? (printf("(nil)")) : (printf("%s", d->name));
		printf("\nAge: %f\n", d->age);
		printf("Owner: ");
		(d->owner == NULL) ? (printf("(nil)")) : (printf("%s", d->owner));
		printf("\n");
	}
}
