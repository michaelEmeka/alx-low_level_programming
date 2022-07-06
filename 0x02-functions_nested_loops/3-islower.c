#include "main.h"

/**
 * main - main block
 * Description: This program checks for lowercase characters
 * Return 1 if c is lowercase
 * 0 if otherwise
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
