#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the address of the head node
 * @str: string of new node
 * Return: address of the new node on success. Otherwise NULL
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	return (new);
}

/**
 * _strlen - computes the len of a string
 * @str: the string
 * Return: the length of the string on success.
*/

int _strlen(const char *str)
{
	int str_count = 0;

	while (str[str_count])
		str_count++;
	return (str_count);
}
