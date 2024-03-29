#include "main.h"

/**
 * _calloc - this function allocates memory for an array of
 * nmemb of elements of size bytes.
 * @nmemb: number of elements.
 * @size: size of each element.
 * Return: array pointer.
 * Or NULL if:
 * -nmemb or size is 0.
 * -malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str = NULL;
	int buffSize, i = 0;

	if (!nmemb || !size)
		return (NULL);
	buffSize = size * nmemb;
	str = malloc(buffSize);
	if (!str)
		return (NULL);
	while (i < buffSize)
		str[i++] = 0;
	return (str);
}
