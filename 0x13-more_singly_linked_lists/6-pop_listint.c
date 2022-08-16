#include "lists.h"

/**
 * pop_listint - this function deletes the head node
 * @head: head node
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	temp = temp->next;
	free(temp);
	return (n);
}
