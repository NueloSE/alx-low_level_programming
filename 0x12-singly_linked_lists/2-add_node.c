#include "lists.h"

/**
 * _strlen - computes the length of a string
 * @s: the string
 * Return: length of a string on success. Otherwise 0.
 */

unsigned int _strlen(const char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer to a pointer pointing to the linked list
 * @str: the string to be added
 * Return: address of the new string. Otherwise NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	const char *dup;
	unsigned int str_len;

	newnode = malloc(sizeof(struct list_s));

	if (newnode == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(newnode);
		return (NULL);
	}
	str_len = _strlen(str);
	newnode->str = strdup(str);
	newnode->len = str_len;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
