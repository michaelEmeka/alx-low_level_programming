#include "main.h"

/**
 * print_to_98 - this function prints every natural number from n to 98
 * @n: starting point parameter
 * Return: 0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			printf("%d,\n", 98);
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			printf("%d\n", 98);
			n--;
		}
	}
}
