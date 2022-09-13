#include "main.h"

/**
 * _calloc - this function allocates memory for an array of
 * nmemb of elements of size bytes.
 * @nmemb: number of elements.
 * @size: size of each element.
 * Return: array pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str = NULL;

	if (!nmemb || !size)
		return (NULL);
	str = malloc(size * nmemb + 1);
	if (!str)
		return (NULL);
	return (str);
}
