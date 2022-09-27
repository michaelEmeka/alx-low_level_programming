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
	listint_t *prev, *temp;
	unsigned int maxIdx = 0;

	temp = *head;
	while(temp)
	{
		temp = temp->next;
		maxIdx++;
	}
	if (index > maxIdx || maxIdx == 0)
		return (-1);
	temp = *head;
	if (index == 0)
		*head = temp->next;
	else
	{
		while (index > 0)
		{
			prev = temp;
			temp = temp->next;
			index--;
		}
		prev->next = temp->next;
	}
	free(temp);
	temp = NULL;
	return (1);
}
