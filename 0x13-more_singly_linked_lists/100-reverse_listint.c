#include "lists.h"

/**
 * reverse_listint - this function reverses a list.
 * @head: head pf the list.
 * Return: new head pointer which is the current tail.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *n;

	p = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;
	return (*head);
}
