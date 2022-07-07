#include "main.h"

/**
 * print_line - main function
 * Description: This function prints a line
 * @n: n times to print '_'
 * Return: nil
 */
void print_line(int n)
{
	if (n > 0 && n != 0)
	{
		while (n--)
		{
			_putchar('_');

		}
	}
	_putchar('\n');
}
