#include "main.h"

/**
 * _islower - main block
 * Description: This program checks for lowercase characters
 * @c: parameter of _islower
 * Return: 1 if c is lowercase and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
