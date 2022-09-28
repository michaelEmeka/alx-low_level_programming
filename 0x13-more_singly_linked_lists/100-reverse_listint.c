#include "lists.h"

/**
 * reverse_listint - this function reverses a list.
 * @head: head pf the list.
 * Return: new head pointer which is the current tail.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv, *nxt;

	prv = nxt = NULL;
	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = nxt;
	}

	*head = prv;
	return (*head);
}
