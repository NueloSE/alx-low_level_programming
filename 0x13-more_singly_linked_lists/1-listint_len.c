#include "lists.h"

/**
 * listint_len - computes the number of elements in a linked list
 * @h: pointer to the list
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;

		h = h->next;
	}

	return (count);
}
