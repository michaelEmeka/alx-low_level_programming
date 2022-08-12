#include "lists.h"

/**
 * add_node_end - this function adds a node to the end of a linked list
 * @head: first node on the list
 * @str: string 
 * Return: an address of the new element or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t end;
	size_t charlen;

	end = malloc(sizeof(list_t));
	if (end == NULL)
		return (NULL);
	for (charlen = 0; str[charlen] != '\0'; charlen++)
		;
	end->next = NULL;
	end->str = strdup(str);
	end->len = charlen;
	*head->next = end;

	return (end);
}
