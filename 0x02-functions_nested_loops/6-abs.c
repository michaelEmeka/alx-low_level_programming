#include "main.h"
#include <stdio.h>

/**
 * _abs - main function
 * Description: This program computes the absolute values of integers
 * @n: parameterv of the _abs function
 * Return: n or n*-1
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return (n);
	}
}
