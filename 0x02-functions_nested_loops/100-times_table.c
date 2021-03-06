#include "main.h"

/**
 * print_times_table - this function prints the times
 * table for numbers less than 15
 * @n: argument(number)
 * Return: always 0;
 */
void print_times_table(int n)
{
	int i = 0, j = 0, p;

	if (n >= 0 && n <= 15)
	{
		while (i <= n)
		{
			while (j <= n)
			{
				p = i * j;
				if (p < 10 && j != 0)
				{
					printf(",   %d", p);
				}
				else if (p > 9 && p < 100)
				{
					printf(",  %d", p);
				}
				else if (p > 99 && p < 1000)
				{
					printf(", %d", p);
				}
				else
				{
					printf("%d", p);
				}
				j++;
			}
			j = 0;
			i++;
			printf("\n");
		}
	}
}
