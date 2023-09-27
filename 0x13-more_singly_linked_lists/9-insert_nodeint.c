#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the list
 * @idx: the index
 * @n: the data to be added
 * Return: the address of the new node on Success. Otherwise NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int num = 1;
	listint_t *tmp = *head, *newnode;

	while (num < idx)
	{
		if (tmp == NULL)
			return (NULL);

		tmp = tmp->next;
		num++;
	}

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = tmp->next;
	tmp->next = newnode;

	return (newnode);
}
