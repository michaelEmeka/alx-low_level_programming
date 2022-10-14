#include "lists.h"

/**
 * insert_dnodeint_at_index - this function adds a node to
 * the list.
 * @h: a pointer to head.
 * @idx: index of new node.
 * @n: new node value.
 * Return: pointer to newly inserted node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp, *prev;
	unsigned int i = 0;

	temp = *h;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = new->next = NULL;
	if (!temp)
	{
		*h = new;
		return (new);
	}
	while (i < idx)
	{
		prev = temp
		temp = temp->next;
		i++;
		if (!temp)
			return (NULL);
	}
	prev->next = new;
	new->prev = prev;
	new->next = temp;
	temp->prev = new;

	return (new);
}
