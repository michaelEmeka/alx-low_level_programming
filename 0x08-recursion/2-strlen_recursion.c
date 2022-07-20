#include "main.h"

/**
 * _strlen_recursion - this function returns the length of a string recursively
 * @s: string argument
 * Return: string s length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
