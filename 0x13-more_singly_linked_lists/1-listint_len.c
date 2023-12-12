#include "lists.h"

/**
 * listint_len - compute the number of elements in a list
 * @h: the list
 * Return: number of element
*/

size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;
	const listint_t *node = h;

	while (node)
	{
		node_count++;
		node = node->next;
	}

	return (node_count);
}
