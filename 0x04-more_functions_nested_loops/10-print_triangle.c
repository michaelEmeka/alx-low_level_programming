#include "main.h"

/**
 * print_triangle - this function prints a triangle
 * @n: argument
 * Return: 0
 */
void print_triangle(int n)
{
	int i = 1, s = 0, c = 0;

	if (n > 0)
	{
		while (i <= n)
		{
			s = n - i;
			while (s > 0)
			{
				_putchar(' ');
				s--;
			}
			c = i;
			while (c > 0)
			{
				_putchar('#');
				c--;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
