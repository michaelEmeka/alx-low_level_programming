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
	int buffSize, position = 0

	if (!nmemb || !size)
		return (NULL);
	buffSize = size * nmemb + 1;
	str = malloc(buffSize);
	if (!str)
		return (NULL);
	while (position < buffSize)
		str[position++] = '0x00';
	return (str);
}
