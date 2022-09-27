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
	unsigned int maxId = 0;
	listint_t *prev, *temp, *new;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		maxId++;
	}
	temp = *head;
	if (idx > maxId)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
		*head = new;
	else if (idx == 0)
	{
		*head = new;
		new->next = temp;
	}
	else
	{
		while (idx > 0)
		{
			prev = temp;
			temp = temp->next;
			idx--;
		}
		prev->next = new;
		new->next = temp;
	}
	return (new);
}
