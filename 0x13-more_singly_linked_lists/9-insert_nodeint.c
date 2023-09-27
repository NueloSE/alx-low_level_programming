#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: address of the list
 * @idx: the position
 * @n: the data
 * Return: a pointer to the newnode on Success. Otherwise NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *currnode;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	currnode = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	idx = ((idx > 0) ? (idx - 1) : 0);
	while (i != idx && currnode)
	{
		currnode = currnode->next;
		i++;
	}

	if (idx > i)
		return (NULL);
	newnode->next = currnode->next;
	currnode->next = newnode;
	return (newnode);
}
