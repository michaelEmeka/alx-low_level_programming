#include "lists.h"

/**
 * free_dlistint - this function frees an entire list.
 * @head: head pointer.
 * Return: ;
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;
	while (head->next)
	{
		free(head->prev);
		head->prev = NULL;
		head = head->next;
	}
	free(head->prev);
	head->prev = NULL;
	free(head);
	head = NULL;
}
