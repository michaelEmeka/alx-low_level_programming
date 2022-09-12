#include "main.h"
#include <stdlib.h>

/**
 * str_concat - this function concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: a new string consisting of s1 & s2
 */
char *str_concat(char *s1, char *s2)
{
	int size = 0, i = 0;
	char *p;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[i] != '\0')
	{
		size++, i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		size++, i++;
	}
	i = 0;
	p = malloc((sizeof(*p) * size) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		if (*s1 != '\0')
		{
			p[i] = *s1++;
		}
		else if (*s1 == '\0' && *s2 != '\0')
		{
			p[i] = *s2++;
		}
		i++;
	}
	p[i] = '\0';
	return (p);
}
