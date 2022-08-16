#include "lists.h"

/**
 * print_listint - this function prints elememts of nodes in
 * the list
 * @h: the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next, i++;
	}
	return (i);
}
