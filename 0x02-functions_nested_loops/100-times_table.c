#include "main.h"

/**
 * print_times_table - this function prints the times
 * table for numbers less than 15
 * @n: argument(number)
 * Return: always 0;
 */
void print_times_table(int n)
{
	int i = 0, j = 0, p, t;

	if (n > 0 && n <= 15)
	{
		while (i <= n)
		{
			while (j <= n)
			{
				p = i * j;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					printf("%d");
				}
				else
				{
					_putchar('0' + p);
				}
				j++;
			}
			i++;
		}
	}
}
