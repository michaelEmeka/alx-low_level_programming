#include "main.h"

/**
 * print_numbers - main function
 * Description: this program prints numbers 0-9
 * Return: nothing
 */
void print_numbers(void)
{
	int n = 0;

	for (; n < 10; n++)
	{
		_putchar('0' + n);
	}
	_putchar('\n');
}
