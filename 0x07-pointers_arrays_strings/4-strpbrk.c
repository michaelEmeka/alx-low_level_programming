#include "main.h"

/**
 * _strpbrk - this function returns a pointer
 * to the first occurence of a character from *accept in *s
 * @s: reference string pointer
 * @accept: search key
 * Return: pointer to first appearance
 */
char *_strpbrk(char *s, char *accept)
{
	int i, a;

	i = a = 0;
	while (*s)
	{
		while (accept[a] != '\0')
		{
			if (*s == accept[a])
			{
				return (s);
			}
			a++;
		}
		a = 0;
		s++;
	}
	return (NULL);
}
