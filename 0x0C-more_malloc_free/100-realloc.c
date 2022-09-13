#include "main.h"

/**
 * _realloc - this function reallocates memory.
 * @ptr: string.
 * @old_size: initial size of ptr.
 * @new_size: size to be expanded to.
 * Return: ptr with size new_size.
 * Or NULL if:
 * -malloc fails.
 * -new_size = 0 and ptr != NULL
 * Or ptr if:
 * -new_size == old_size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *temp;
	unsigned int position = 0;

	(char *)ptr;

	if (new_size == old_size)
		return (ptr);
	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	temp = malloc(new_size);
	if (!temp)
		return (NULL);
	if (!ptr)
		return (temp);
	while (position < old_size)
	{
		temp[position] = ptr[position];
		position++;
	}
	free(ptr);
	return (temp);
}
