#include "main.h"

/**
 * _strspn - this function returns the number of bytes in the
 * initial segment of *s that contains *accept
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
			if (s[i] == accept[a])
			{
				return (s);
			}
			a++;
		}
		a = 0;
		i++;
		s++;
	}
	return (NULL);
}
