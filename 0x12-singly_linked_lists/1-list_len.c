#include "lists.h"

/**
 * list_len - A function that computes the number of elements in a list
 * @h: A pointer to the first node of the linked list
 * Return: the number of element in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *tmp;

	tmp = h;

	while (tmp != NULL)
	{
		count += 1;
		tmp = tmp->next;
	}
	return (count);
}
