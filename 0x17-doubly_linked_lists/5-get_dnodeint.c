#include "lists.h"

/**
 * get_dnodeint_at_index - this functin gets the node at given
 * index.
 * @head: head pointer.
 * @index: index of requested node.
 * Return: node at index index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	while (index > 0)
	{
		head = head->next;
		index--;
	}
	return (head);
}
