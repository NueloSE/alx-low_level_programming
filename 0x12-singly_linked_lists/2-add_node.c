#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: address holding head pointer
 * @str: string to be added
 * Return: pointer to the new element on success. otherwise NULL
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *(head);
	*(head) = new;
	return (new);
}

/**
 * _strlen - computes the len of a string
 * @str: the string
 * Return: the length of the string on success.
*/

int _strlen(char *str)
{
	int str_count = 0;

	while (str[str_count])
		str_count++;
	return (str_count);
}
