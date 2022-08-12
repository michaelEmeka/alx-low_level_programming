#include "lists.h"

/**
 * add_node_end - this function adds a node to the 
 * end of a linked list
 * @head: first node on the list
 * @str: string struct member
 * Return: an address of the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end, *temp;
	size_t charlen;

	end = malloc(sizeof(list_t));
	if (end == NULL)
		return (NULL);

	end->str = strdup(str);

	for (charlen = 0; str[charlen]; charlen++)
		;

	end->len = charlen;
	end->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = end;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = end;
	}

	return (*head);
}
