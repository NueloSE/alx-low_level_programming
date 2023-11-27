#ifndef DOG_H
#define DOG_H

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

void int_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
