#include "main.h"

/**
 * _strcmp - this function compares two strings
 * and returns a value
 * @s1: left string parameter
 * @s2: right string parameter
 * Return: always 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, d;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			d = s1[i] - s2[i];
			break;
		}
		else
		{
			d = 0;
		}
		i++;
	}
	return (d);
}
