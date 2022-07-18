#include "main.h"

/**
 * _memcpy - this function copies  bytes from memory area src to dest
 * @dest: destinatiion parameter
 * @src: source parameter
 * @n: number of bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
