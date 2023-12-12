#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of list
 * @head: address of the head node
 * @n: value of the data
 * Return: address to the new element on success. Otherwise NULL
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *(head);
	*(head) = new_node;
	return (new_node);
}
