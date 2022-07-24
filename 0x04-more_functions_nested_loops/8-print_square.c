#include "main.h"

/**
 * print_square - this function prints a square
 * using #
 * @size: first argument
 * Return: 0
 */
void print_square(int size)
{
	int w = 0, h = 0;

	if (size > 0)
	{
		while (h < size)
		{
			while (w < size)
			{
				_putchar('#');
				w++;
			}
			w = 0;
			_putchar('\n');
			h++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
