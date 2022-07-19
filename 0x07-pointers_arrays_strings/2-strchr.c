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

	while (str + i != '\0')
	{
		if (str + i == c)
		{
			break;
		}
		i++;
	}
	return (str + --i);
}
