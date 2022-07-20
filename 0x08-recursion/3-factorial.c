#include "main.h"

/**
 * factorial - this function prints the factorial of  given number n
 * @n: number argument
 * Return: n factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		n = 1;
	}
	return (factorial(n - 1) * n);
}
