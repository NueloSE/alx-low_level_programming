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
	/*dog_t *mydog, *dog_name, *owner_name;
	int i;

	mydog = malloc(sizeof(dog_t));
	if (mydog == NULL)
		return (NULL);
	
	dog_name = malloc(sizeof(name));
	if (dog_name == NULL)
	{
		free(mydog);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		dog_name[i] = name[i];
	dog_name[i] = '\0';
	mydog->name = dog_name;

	owner_name = malloc(sizeof(owner));
	if (owner_name == NULL)
	{
		free(dog_name);
		free(mydog);
		return (NULL);
	}
	for (i = 0; owner[i]; i++)
		owner_name[i] = owner[i];
	owner_name[i] = '\0';
	mydog->owner = owner_name;

	mydog->age = age;

	return (mydog);*/

	dog_t *mydog = malloc(sizeof(dog_t));
	
	if (mydog == NULL)
		return (NULL);
	mydog->name = strdup(name);
	mydog->owner = strdup(owner);
	mydog->age = age;
	return (mydog);
}
