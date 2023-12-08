#include "lists.h"

/**
 * print_list - prints elements in a singly linked list
 * @h: points to the list
 * Return: number of nodes on success. Otherwise NULL
*/

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		node_count++;
		h = h->next;
	}
	return (node_count);
}
