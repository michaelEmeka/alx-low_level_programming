#include "main.h"
#include <stdlib.h>

/**
 * str_concat - thos function concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: a new string consisting of s1 & s2
 */
char *str_concat(char *s1, char *s2)
{
	int size = 0, i = 0, j = 0;
	char *p;
	
	if (s1 != NULL)
	{
		while(s1[i] != '\0')
		{
			size++;
			i++;
		}
	}
	i = 0;
	if (s2 != NULL)
	{
		while(s2[i] != '\0')
		{
			size++;
			i++;
		}
	}
	i = 0;
	p = malloc(sizeof(*p) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	p++;
	while (i < size)
	{
		if (s1[i] != '\0')
		{
			p[i] = s1[i];
		}
		else if (s2[j] != '\0')
		{
			p[i] = s2[j];
			j++;
		}
		i++;
	}
	p[i] = '\0';
	return (p);
}
