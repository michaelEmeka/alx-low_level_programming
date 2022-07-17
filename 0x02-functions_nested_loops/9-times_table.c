#include "main.h"

/**
 * times_table - this programme prints the 9 times table
 * Return: always 0
 */
void times_table(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (y != 9)
			{
				_putchar('0' + (x * y));
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + (x * y));
			}
		}
		_putchar('\n');
	}
}
