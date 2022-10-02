#include "lists.h"

/**
 * dlistint_len - this function returns the number of elements
 * on a list.
 * @h: head pointer.
 * Return: number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
