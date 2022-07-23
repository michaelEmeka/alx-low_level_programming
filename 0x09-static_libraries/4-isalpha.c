#include "main.h"

/**
 * _isalpha - main function
 * Description: This program checks for alphabetic characters
 * @c: parameter for _isalpha
 * Return: 1 if c is a letter and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
