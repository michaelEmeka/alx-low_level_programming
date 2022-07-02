#include <stdio.h>

/**
 * main - This program prints all combination of single digits
 * Description: Numbers must be seaprated by ,
 * Return: 0
 */
int main(void)
{
	int n = 48;

	while (n < 57)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar(58);

	return (0);
}
