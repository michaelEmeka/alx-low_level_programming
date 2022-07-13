#include "main.h"

/**
 * _strlen - main function
 * @s: pointer parameter
 * Return: string length
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
