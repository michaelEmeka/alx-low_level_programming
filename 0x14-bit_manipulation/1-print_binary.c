#include "main.h"

/**
 * print_binary - this function prints a number in binary
 * @n: base 10 number
 * Return: nothing
 */
void printBinary(unsigned long int n)
{
	float nn = (float) n;

	if (n <= 0)
		return;
	n *= 0.5;
	nn *= 0.5;
	if (n == nn)
	{
		printBinary(n);
		_putchar(0 + '0');
	}
	else
	{
		printBinary(n);
		_putchar(1 + '0');
	}
}
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar(0 + '0');
	else
		printBinary(n);
}
