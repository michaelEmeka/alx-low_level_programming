#include "main.h"

/**
 * more_numbers - main funcetion
 * Description: This program prints numbers 0-14 10 times
 * Return: nothing
 */
void more_numbers(void)
{
	int n, r;

	for (n = 0; n < 10; n++)
	{
		for (r = 0; r < 15; r++)
		{
			if (r > 9)
			{
				_putchar(1 + '0');
			}
			_putchar('0' + (r % 10));
		}
		_putchar('\n');
	}
}
