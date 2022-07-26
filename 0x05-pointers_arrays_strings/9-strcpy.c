#include "main.h"

/**
 * _strcpy - this function copies string from src to dest
 * @src: source string array
 * @dest: destination pointer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
