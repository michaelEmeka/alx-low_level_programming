#include "main.h"

/**
 * _strcpy - this function copies string from src to dest
 * @src: source string array
 * @dest: destination pointer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
