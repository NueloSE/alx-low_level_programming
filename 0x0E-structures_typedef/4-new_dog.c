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
	dog_t *mydog = malloc(sizeof(dog_t));

	if (mydog == NULL)
		return (NULL);
	mydog->name = _strdup(name);
	if (mydog->name == NULL)
	{
		free(mydog);
		return (NULL);
	}
	mydog->owner = _strdup(owner);
	if (mydog->owner == NULL)
	{
		free(mydog->name);
		free(mydog);
		return (NULL);
	}
	mydog->age = age;
	return (mydog);
}

/**
 * _strdup - duplicates a string passed
 * @src: the source string
 * Return: pointer to new string
 */

char *_strdup(char *src)
{
	int i, len = 0;
	char *des;

	for (; src[len]; len++)
		;
	des = malloc(len + 1);
	if (des == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		des[i] = src[i];
	}
	des[i] = '\0';
	return (des);
}
