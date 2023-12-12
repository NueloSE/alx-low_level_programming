#include "lists.h"

/**
 * sum_listint - computes the sum of all data(n) of a listint_t list
 * @head: pointer to the head node
 * Return: sum of list on success. Otherwise 0
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current_node = head;

	if (head == NULL)
		return (sum);

	while (current_node)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
