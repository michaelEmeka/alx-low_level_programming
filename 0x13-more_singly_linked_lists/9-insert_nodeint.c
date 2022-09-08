#include "lists.h"

/**
 * insert_nodeint_at_index - this function inserts a node at idx
 * @head: head node
 * @idx: index of new node
 * @n: n value of new node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int locat = 0;
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *head;
	while (temp != NULL && locat <= idx)
	{
		temp = temp->next;
		locat++;
	}
	new->next = temp;
	temp = new;
	return (new);
}