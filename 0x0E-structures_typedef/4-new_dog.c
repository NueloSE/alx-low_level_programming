#include "dog.h"

/**
 * _strcpy - copies a string
 * @dest: The final string
 * @src: The copied string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

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

	dog1->name = malloc(sizeof(name) + 1);
	if (dog1->name == NULL)
	{
		free(dog1);
		return (NULL);
	}
	_strcpy(dog1->name, name);

	dog1->owner = malloc(sizeof(owner) + 1);
	if (dog1->owner == NULL)
	{
		free(dog1->name);
		free(dog1);
		return (NULL);
	}
	_strcpy(dog1->owner, owner);
	dog1->age = age;
	return (dog1);
}
