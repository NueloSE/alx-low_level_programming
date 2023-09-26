#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the list
 * @index: the index of the node, starting at index 0
 * Return: pointer to the node. Otherwise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);

	tmp = head;

	while (num < index && tmp->next != NULL)
	{
		num++;
		tmp = tmp->next;
	}

	return (tmp);
}
