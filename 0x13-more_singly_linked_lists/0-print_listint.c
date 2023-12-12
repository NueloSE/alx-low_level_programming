#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: the list
 * Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *node;

	node = h;
	while (node)
	{
		count++;
		printf("%d\n", node->n);
		node = node->next;
	}
	return (count);
}
