#include "lists.h"

/**
 * add_dnodeint - adds a node to the list.
 * @head: pointer to head.
 * @n: new data.
 * Return: new data.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp, *prev;

	temp = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new || !temp)
		return NULL;
	while (n > 0)
	{
		prev = temp;
		temp = temp->next;
		n--;
	}
	if (!temp)
		return NULL;
	new->next = temp;
	new->prev = prev;
	prev->next = new;
	temp->prev = new;
	return (new);
}
