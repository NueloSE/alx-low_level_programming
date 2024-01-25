#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlinked list
 * @h: pointer to the head node
 * Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t count = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		count += 1;
		tmp = tmp->next;
	}
	return (count);
}
