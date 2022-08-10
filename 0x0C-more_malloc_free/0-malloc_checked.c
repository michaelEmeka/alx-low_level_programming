#include <stdlib.h>
#include "main.h"
/**
 * void *malloc_checked(unsigned int b);
 * malloc_checked - this function allocates memory using malloc
 * @b: no of bytes
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);
	if (ptr != NULL)
		return (ptr);
	else
		exit (98);
}
