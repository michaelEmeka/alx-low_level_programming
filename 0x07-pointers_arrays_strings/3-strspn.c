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
	int i = 0, c = 0;

	while(s[i] != ' ')
	{
		while(*accept)
		{
			if (s[i] == *accept)
			{
				c++;
			}
			accept++;
		}
		i++;
	}
	return (c);
}
