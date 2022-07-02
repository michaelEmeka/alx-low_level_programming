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
		if (n == 57)
		{
			putchar(57);
		}
		else
		{
			putchar(n);
			putchar(',');
		}
		putchar(' ');
		n++;
	}

	return (0);
}
