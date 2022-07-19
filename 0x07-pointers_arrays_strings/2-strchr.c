#include "main.h"

/**
 * _strchr - this function returns a pointer to the first occurence
 * of the given character in c
 * @c: character argument
 * @s: array pointer argument
 * Return: pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (!c ? s : NULL);
}
