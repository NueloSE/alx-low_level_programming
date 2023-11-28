#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to new dog on success. NULL otherwise
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;
	char *dog_name, *owner_name;

	if (name == NULL || owner == NULL)
		return (NULL);
	mydog = malloc(sizeof(dog_t));
	dog_name = malloc(sizeof(name));
	owner_name = malloc(sizeof(owner));

	if (mydog == NULL || dog_name == NULL || owner_name == NULL)
		return (NULL);
	_strcpy(dog_name, name);
	_strcpy(owner_name, owner);
	mydog->name = dog_name;
	mydog->age = age;
	mydog->owner = owner_name;

	if (mydog == NULL)
		return (NULL);
	return (mydog);
}

/**
 * _strcpy - copies a string from one string to another
 * @src: the source
 * @dest: the destination
 * Return: pointer to the new copy
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
