#include "main.h"

/**
 * more_numbers - main funcetion
 * Description: This program prints numbers 0-14 10 times
 * Return: nil
 */
void more_numbers(void)
{
	int n, r;

	for (n = 0; n < 10; n++)
	{
		for (r = 0; r < 15; r++)
		{
			_putchar('0' + r);
		}
	}
}
