#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - this function duplicates a string and returns a pointer to the
 * new string
 * @str: initial string
 * Return: a copy of the string
 */
char *_strdup(char *str)
{
	int size = 0, i = 0;
	char *new;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	new = malloc((sizeof(*new) * size) + 1);
	if (new == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		new[i] = str[i];
		i++;
	}
	return (new);
}
