#include "main.h"

/**
 * print _diagonal - main function
 * @n: this is the function's argument
 * Description: this program draws a diagonal line on the terminal
 * Return: nil
 */
void print_diagonal(int n)
{
	int s = n, c;

	if (n > 0 && n != 0)
	{
		while (n--)
		{
			for (c = 0; c < (s - (n + 1)); s--)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
