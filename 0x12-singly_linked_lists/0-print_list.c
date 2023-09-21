#include "lists.h"

/**
 * print_list - A function that prints all the elements of a list_t list
 * @h: A pointer to the head
 * Return: the number of elements in a linked list
 */

size_t print_list(const list_t *h)
{
	const list_t *tmp;
	size_t count;

	tmp = h;

	while (tmp != NULL)
	{
		count = 1;
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
		count++;
	}
	return (count);
}
