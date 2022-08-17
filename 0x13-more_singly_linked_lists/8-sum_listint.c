#include "lists.h"
/**
 * sum_listint - this funtion gets the sum of all n's in nodes
 * @head: head node
 * Returns: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
