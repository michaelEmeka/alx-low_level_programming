#include "lists.h"

/**
 * delete_nodeint_at_index - this function deletes a node at
 * an index.
 * @head: head pointer.
 * @index: index of node to be deleted.
 * Return: 1 on success, -1 on failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int position = 0;
	listint_t *temp = *head;

	while (position < index)
	{
		temp = temp->next;
		position++;
		if (!temp)
			break;
	}
	if (!temp)
		return (-1);
	*head = temp->next;
	free(temp);
	temp = NULL;
	return (1);
}
