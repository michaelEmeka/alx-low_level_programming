#include "lists.h"

/**
 * listint_len - this function returns the number of element
 * in a listint_t
 * @h: a sample node
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nElem = 0;

	while (h != NULL)
	{
		h = h->next;
		nElem++;
	}
	return (nElem);
}
