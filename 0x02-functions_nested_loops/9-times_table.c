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
			tens = (p - units) / 10;
			if (p < 10)
			{
				if (y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' +  p);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + tens);
				_putchar('0' + units);
			}
		}
		_putchar('\n');
	}
}
