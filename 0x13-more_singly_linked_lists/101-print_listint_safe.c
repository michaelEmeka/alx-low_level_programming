#include "lists.h"

/**
 * print_listint_safe - this function prints a list.
 * @head: head pointer.
 * Return: number of nodes in the list
 * or exit with 98 if the function fails.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t size;
	const listint_t *temp = head;

	while (head->next && head->next != temp)
	{
		printf("%d\n", head->n);
		head = head->next;
		size++;
	}
	return (size);
}
