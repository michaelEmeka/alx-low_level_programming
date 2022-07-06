#include "main.h"

/**
 * print_sign - main function
 * Description: This program prints the sign of a number
 * @n: this is the number in question
 * Return: 1, 0 or -1 depending on the sign of the number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
