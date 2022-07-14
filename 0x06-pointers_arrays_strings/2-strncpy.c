#include "main.h"

/**
 * *_strncpy - copy function
 * @dest: string to be copied into
 * @src: source string
 * @n: n byte of source string parameter
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
