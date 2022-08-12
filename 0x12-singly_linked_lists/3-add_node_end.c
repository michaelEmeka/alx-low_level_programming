#include "lists.h"

/**
 * add_node_end - this function adds a node to the end of a linked list
 * @head: first node on the list
 * @str: string 
 * Return: an address of the new element or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end, *temp;
	size_t charlen;

	end = malloc(sizeof(list_t));
	if (end == NULL)
		return (NULL);
	for (charlen = 0; str[charlen] != '\0'; charlen++)
		;
	end->str = strdup(str);
	end->len = charlen;
	end->next = NULL;
	temp = *head;
	if (temp = NULL)
	{
		temp = end;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = end;
	}

	return (*head);
}
