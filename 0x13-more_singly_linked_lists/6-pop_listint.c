#include "lists.h"

/**
 * pop_listint - this function deletes the head node
 * @head: head node
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp, *h;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	free(temp);
	*head = h;
	return (n);
}
