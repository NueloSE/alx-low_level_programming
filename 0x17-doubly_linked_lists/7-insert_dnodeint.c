#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: a double pointer to the head node
 * @idx: the index of the list list where new node should be added
 * @n: the value to be inserted
 * Return: address of the new node, or NULL if failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	else
	{
		while ((idx > 0) && (tmp != NULL))
		{
			tmp = tmp->next;
			idx -= 1;
		}
	}
	if ((idx > 0) || (tmp == NULL))
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = tmp->prev;
	new_node->next = tmp;
	(tmp->prev)->next = new_node;
	tmp->prev = new_node;
	return (new_node);
}
