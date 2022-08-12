#include "lists.h"
/**
 * list_len - this function returns the length  of a linked list
 * @h: a linked list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
