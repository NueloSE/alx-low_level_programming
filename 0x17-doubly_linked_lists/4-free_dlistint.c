#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t
 * @head: a pointer to the head node
 * Return: always void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
	free(head);
}
