#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to the address of the head node
 * @idx: the index of the list where the new node should be added
 * @n: the data
 * Return: address of the new node on success. Otherwise NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head, *new_node = malloc(sizeof(listint_t));

	if (*head == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	idx--;
	while (idx >= 1)
	{
		tmp = tmp->next;
		idx--;
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
