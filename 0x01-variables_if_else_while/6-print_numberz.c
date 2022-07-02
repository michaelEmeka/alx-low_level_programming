#include <stdio.h>

/**
 * main - This program prints out numbers 0 - 9
 * Description: no char type, only use putchar(twice only)
 * Return: 0
 */
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
