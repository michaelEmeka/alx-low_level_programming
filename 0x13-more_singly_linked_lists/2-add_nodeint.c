#include "lists.h"

/**
 * add_nodeint - this function adds a node at the beginning
 * of the list
 * @head: a pointer to the pointer, head
 * @n: new nodes's n value
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new, *init;

	new = malloc(sizeof(listint_t));
	if (new = NULL)
		return (NULL);
	init = *head;
	*head = new;
	new->n = n;
	new->next = init;
	return (*head);
}
