#include <stdlib.h>
#include "main.h"
/**
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
	exit(98);
}
