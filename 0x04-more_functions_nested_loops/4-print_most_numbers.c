#include "main.h"

/**
 * print_most_numbers - main function
 * Description: this program prints numbers 0-9 with exceptionof 2 and 4
 * Return: nil
 */
void print_most_numbers(void)
{
	int n = 0;

	for (; n < 10; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar('0' + n);
		}
	}
	_putchar('\n');
}
