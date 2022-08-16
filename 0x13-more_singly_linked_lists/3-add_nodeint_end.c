#include "lists.h"

/**
 * add_nodeint_end - this function adds an element to the
 * end of the list
 * @head: head of the list
 * @n: number property of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;

	end = malloc(sizeof(listint_t));
	if (end == NULL)
		return (NULL);
	while (*head != NULL)
		*head = *head->next;
	*head = end;
	end->n = n;
	end->next=NULL;
	return (*head);
}
