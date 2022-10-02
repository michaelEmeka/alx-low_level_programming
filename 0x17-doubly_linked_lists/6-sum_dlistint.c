#include "lists.h"

/**
 * sum_dlistint - this function sums the values in a list.
 * @head: head pointer.
 * Return: sum value.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
