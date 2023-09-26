#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list and returns
 * the deleted node
 * @head: pointer to the linked list
 * Return: deleted data. Otherwise 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int del_num;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	del_num = temp->n;
	free(temp);

	return (del_num);
}
