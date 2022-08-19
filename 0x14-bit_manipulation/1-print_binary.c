#include "main.h"

/**
 * print_binary - this function prints a number in binary
 * @n: base 10 number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	float nn = n;

	if (n <= 0)
		return;
	n *= 0.5;
	nn *= 0.5;
	if (n == nn)
	{
		printBinary(n);
		printf("0");
	}
	else
	{
		printBinary(n);
		printf("1");
	}
}
