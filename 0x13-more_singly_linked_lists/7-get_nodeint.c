#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a listint_t linked list
 * @head: pointer to head node
 * @index: nth index
 * Return: the nth node on success. Otherwise NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *tmp = head;

	for (; (count <= index) && (tmp != NULL); count++)
	{
		if (count == index)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
