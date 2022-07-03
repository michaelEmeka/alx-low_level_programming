#include <stdio.h>

/**
 * main - this program prints all combinations of two digits
 * Description: two digits must be different
 * Return: 0
 */
int main(void)
{
	int n = 0;
	int c = 0;

	for (n = 0; n < 10; n++)
	{
		for (c = n + 1; c < 10; n++)
		{
			putchar(48 + n);
			putchar(48 + c);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
