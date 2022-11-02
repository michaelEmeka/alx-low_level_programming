#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node from list.
 * @head: head pointer.
 * @index: index of node to be deleted.
 * Return: 1 on success, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev, *next;

	temp = *head;
	if (!temp)
		return (-1);
	if (index == 0)
	{
		if (temp->next)
		{
			(*head) = temp->next;
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}
	prev = temp->prev;
	next = temp->next;
	while (index > 0 && next)
	{
		prev = temp;
		temp = next;
		next = temp->next;
		index--;
	}
	if (!next)
		return (-1);
	free(temp);
	prev->next = next;
	next->prev = prev;

	return (1);
}
