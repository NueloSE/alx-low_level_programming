#include "lists.h"

/**
 * sum_dlistint - computes the sum of all data(n)
 * @head: the pointer to the start node of the dlinked list
 * Return: the sum of all data on success. Otherwise 0
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
