#include "dog.h"

/**
 * new_dog - A function that creates a new dog
 * @name: pointer to the name of the dog
 * @age: Dog age
 * @owner: pointer to the owner of the dog
 * Return: A pointer to the new dog. Otherwise NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);
	dog1->name = name;
	dog1->age = age;
	dog1->owner = owner;

	return (dog1);
}
