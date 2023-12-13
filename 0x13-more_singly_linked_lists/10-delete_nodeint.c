#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of linked list
 * @head: pointer to address of the head node
 * @index: position to delete
 * Return: 1 if it successful. Otherwise -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node = 0;
	listint_t *curr_node = *(head), *prev_node = *(head);

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(curr_node);
		return (1);
	}
	while ((node <= index) && (curr_node != NULL))
	{
		if (node == index)
		{
			prev_node->next = curr_node->next;
			free(curr_node);
			return (1);
		}
		prev_node = curr_node;
		curr_node = curr_node->next;
		node++;
	}
	return (-1);
}
