#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: a pointer to a pointer to head of the list
 * @n: the integer to add
 * Return: the address of the newnode on Success. Otherwise NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
