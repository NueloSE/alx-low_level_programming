#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at a position
 * @head: pointer to the start node
 * @index: to position to get
 * Return: address of the nth node if exist. Otherwise NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;

	while ((index > 0) && (tmp != NULL))
	{
		tmp = tmp->next;
		index -= 1;
	}
	if (index > 0)
		return (NULL);
	return (tmp);
}
