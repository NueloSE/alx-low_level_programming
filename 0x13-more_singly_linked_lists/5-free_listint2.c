#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: a double pointer to the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL)
		return;
	if ((*head)->next == NULL)
	{
		free(*head);
	}

	else
	{
		while ((*head)->next != NULL)
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
		}
		free(*head);
	}
}
