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
	char *p = NULL;

	if (s1 != '\0')
	{
		while (s1[i] != '\0')
		{
			size++;
			i++;
		}
		i = 0;
	}
	if (s2 != '\0')
	{
		while (s2[i] != '\0')
		{
			size++;
			i++;
		}
		i = 0;
	}
	p = malloc(sizeof((*p) * size) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
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
