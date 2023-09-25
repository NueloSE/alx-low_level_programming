#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t
 * @head: double pointer to the list
 * @n: the integer to add
 * Return: address of the new element. Otherwise NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *newnode;

	if (*head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		if (*head == NULL)
			return (NULL);

		(*head)->n = n;
		(*head)->next = NULL;
		return (*head);
	}
	else
	{
		ptr = *head;

		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}

		newnode = malloc(sizeof(listint_t));

		if (newnode == NULL)
			return (NULL);

		newnode->n = n;
		newnode->next = NULL;

		ptr->next = newnode;
	}

	return (newnode);
}
