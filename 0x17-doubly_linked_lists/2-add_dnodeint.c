#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of a dlinked list
 * @head: double pointer to the start node of the double linked list
 * @n: the data value
 * Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (head == NULL || (*head) == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	new_node->prev = NULL;
	new_node->next = (*head);
	*head = new_node;

	return (new_node);
}
