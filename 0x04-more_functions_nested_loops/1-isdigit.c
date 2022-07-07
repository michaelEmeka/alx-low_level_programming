#include "main.h"

/**
 * _isdigit - main function
 * @c: this is the function's parameter
 * Description: This program checks for a digit(0 through 9)
 * Return: 0 if otherwise;
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
