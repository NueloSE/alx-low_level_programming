#include "lists.h"

/**
 * list_len - computes the number of elements in a linked list_t list
 * @h: points to the list
 * Return: number of element h
*/

size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
