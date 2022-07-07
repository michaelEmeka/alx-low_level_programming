#include "main.h"

/**
 * print_last_digit - main function
 * Description: this program prints the last digit of a number
 * @n: this is the function's parameter
 * Return: last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = (-1 * (n % 10));
		_putchar (last_digit + '0');
		return (last_digit);
	}
	else
	{
		last_digit = (n % 10);
		_putchar (last_digit + '0');
		return (last_digit);
	}
}
