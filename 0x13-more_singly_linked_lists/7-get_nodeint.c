#include "lists.h"

/**
 * get_nodeint_at_index - compute the nth node of a listint_t linked list
 * @head: pointer to the list
 * @index: the target position
 * Return: node at position index. Otherwise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;

	while (num < index)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
		num++;
	}

	return (head);
}
