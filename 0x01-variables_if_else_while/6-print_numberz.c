#include <stdio.h>

/**
 * main - This program prints out numbers 0 - 9
 * Description: no char type, only use putchar(twice only)
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
