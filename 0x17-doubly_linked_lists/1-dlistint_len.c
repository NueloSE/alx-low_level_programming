#include "lists.h"

/**
 * dlistint_len - computes the number of elements in a dlinked list
 * @h: a pointer to the head node
 * Return: the number of node in a dlinked list
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t count = 0;

	while (tmp != NULL)
	{
		count += 1;
		tmp = tmp->next;
	}
	return (count);
}
