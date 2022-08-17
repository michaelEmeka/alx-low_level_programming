#include "lists.h"

/**
 * get_nodeint_at_index - this function gets the node at index
 * @head: head node pointer
 * @index: index of node to be returned
 * Return: node at index n
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i <= index)
	{
		head = head->next;
		i++;
	}
	if (head == NULL)
		return (NULL);
	return (head);
}
