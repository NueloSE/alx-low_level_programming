#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer to the address of head node
 * Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp = *(head);

	while (tmp != NULL)
	{
		*(head) = tmp->next;
		free(tmp);
		tmp = *(head);
	}
	*(head) = NULL;
}
