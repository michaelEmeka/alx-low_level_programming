#include "main.h"

/**
 * print_last_digit - main function
 * Description: this program prints the last digit of a number
 * @n: this is the function's parameter
 * Return: last digit
 */
int print_last_digit(int n)
{
	_putchar('0' + (n % 10));
	return (n % 10);
}
