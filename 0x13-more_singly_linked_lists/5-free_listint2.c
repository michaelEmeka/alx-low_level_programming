#include "lists.h"

/**
 * free_listint2 - this function frees the list
 * @head: list head
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
        listint_t *current;

        while (*head != NULL)
        {
                current = *head;
                *head = *head->next;
                free(current);
        }
}
