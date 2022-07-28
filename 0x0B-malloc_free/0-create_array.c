#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - this function creates an array of chars and initializes it
 * with a specific char
 * @size: size argument
 * @c: character initializer
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ch;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		unsigned int i = 0;

		ch = malloc(sizeof(*ch) * size);
		while (i < size)
		{
			*(ch + i) = c;
			i++;
		}
		return (ch);
	}
	return (NULL);
}
