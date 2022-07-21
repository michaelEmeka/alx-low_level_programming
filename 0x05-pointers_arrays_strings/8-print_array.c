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
		if (a[i] < 0)
		{
	
			_putchar(a[i] % 10);
		i++;
	}
	_putchar('\n');
}
