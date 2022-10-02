#include "lists.h"

/**
 * add_dnodeint - adds a node to the list.
 * @head: pointer to head.
 * @n: new data.
 * Return: new data.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = new->next = NULL;
	*head = new;
	if (!temp)
		return (new);
	new->next = temp;
	temp->prev = new;
	return (new);
}
