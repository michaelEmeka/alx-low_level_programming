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
	int i = 0;
	char *p = NULL;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = s + i;
			break;
		}
		i++;
	}
	return (p);
}
