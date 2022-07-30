#include "main.h"

/**
 * _strspn - this function returns the number of bytes in the
 * initial segment of *s that contains *accept
 * @s: reference string pointer
 * @accept: search key
 * Return: number of appearances
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, a, c;

	i = a = c = 0;
	while (s[i] != ' ')
	{
		while (accept[a] != '\0')
		{
			if (s[i] == accept[a])
			{
				c++;
			}
			a++;
		}
		a = 0;
		i++;
	}
	return (c);
}
