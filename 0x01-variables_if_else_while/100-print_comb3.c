#include <stdio.h>
#include <stdlib.h>

/**
 * main - this program prints all combinations of two digits
 * Description: two digits must be different
 * Return: 0
 */
int main(void)
{
	int n, c;

	for (n = 0; n < 10; n++)
	{
		for (c = 1 + n; c < 10; n++)
		{
			putchar(48 + n);
			putchar(48 + c);
			if (n != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
