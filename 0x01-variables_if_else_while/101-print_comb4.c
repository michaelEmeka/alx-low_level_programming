#include <stdio.h>

/**
 * main - This program prints combinations of three digits
 * Description: putchar only
 * Return: 0
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				putchar(48 + a);
				putchar(48 + b);
				putchar(48 + c);
				if (a != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	return (0);
}
