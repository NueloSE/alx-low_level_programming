#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRUCT_SIZE 3

/**
 * struct dog - a secondary data structure with the following elements:
 * @name: name of dog
 * @age: dog age
 * @owner: name of owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

char *_strcpy(char *dest, char *src);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
