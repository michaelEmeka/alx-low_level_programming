#include <stdio.h>

/**
 * main - This program prints all combination of single digits
 * Description: Numbers must be seaprated by ,
 * Return: 0
 */
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
