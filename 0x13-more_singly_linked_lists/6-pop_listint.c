#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: address to the head node of list
 * Return: head node's data (n) on success. Otherwise 0
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num = 0;

	if (*head == NULL)
		return (num);
	tmp = *head;
	*head = (*head)->next;
	num = tmp->n;
	free(tmp);
	return (num);
}
