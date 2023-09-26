#include "lists.h"

/**
 * sum_listint - computes the sum of all data of a listint_t list
 * @head: a pointer to the linked list
 * Return: the computed sum. Otherwise 0.
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (sum);

	tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
