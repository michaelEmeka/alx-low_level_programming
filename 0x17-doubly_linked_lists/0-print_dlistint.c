#include "lists.h"

/**
 * print_dlistint - this function prints a list.
 * @h: head pointer
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;
	dlistint_t *temp = h;

	while (h->next != h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
