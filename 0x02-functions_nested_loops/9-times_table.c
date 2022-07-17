#include "main.h"

/**
 * times_table - this programme prints the 9 times table
 * Return: always 0
 */
void times_table(void)
{
	int x, y, p, units, tens;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			p = x * y;
			units = p % 10;
			tens = (p - u) / 10;
			if (p < 10)
			{
				_putchar('0' +  p);
			}
			else
			{
				_putchar('0' + tens);
				_putchar('0' + units);
			}
			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
