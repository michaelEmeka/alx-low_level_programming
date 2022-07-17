#include "main.h"

/**
 * print_to_98 - this function prints every natural number from n to 98
 * @n: starting point parameter
 * Return: 0
 */
void print_to_98(int n)
{
	int units, tens;

	while (n < 99)
	{
		units = n % 10;
		tens = (n - units) / 10;
		if (n > 10)
		{
			_putchar('0' + tens);
		}
		_putchar('0' + units);
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	_putchar('\n');
}
