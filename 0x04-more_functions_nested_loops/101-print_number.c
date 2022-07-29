#include "main.h"

/**
 * print_number - this function prints a number
 * @n: number to print
 * Return: 0
 */
void print_number(int n)
{
	unsigned int d = 1, c, t;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	c = n;
	if (n < 10)
	{
		_putchar('0' + n);
	}
	else
	{
		while (c > 9)
		{
			d *= 10;
			c /= 10;
		}
		while (d > 0)
		{
			t = (n / d) % 10;
			_putchar('0' + t);
			d /= 10;
		}
	}
}
