#include "lists.h"

/**
 * add_dnodeint_end - this function adds a node to the end of
 * a list.
 * @head: pointer to head.
 * @n: new element n value.
 * Return: new element or NULL on failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	temp = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return NULL;
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (!temp)
		return (new);
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	new->prev = temp;
	return (new);
}
