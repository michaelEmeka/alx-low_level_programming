#include "main.h"

/**
 * print_array - this function prints n elements of
 * an array
 * @a: string parameter
 * @n: number of elements
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i > 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar(a[i]);
		i++;
	}
	_putchar('\n');
}
