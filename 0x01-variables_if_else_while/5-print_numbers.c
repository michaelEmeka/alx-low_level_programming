#include <stdio.h>

/**
 * main - This program prints numbers 0 - 9
 * Description: prints a new line after this iteration
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%i", n);
		n++;
	}
	putchar('\n');
	return (0);
}
