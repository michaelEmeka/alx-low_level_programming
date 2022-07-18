#include "main.h"

/**
 * _memset - this function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: first argument
 * @b: second argument
 * @n: third argument
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
