#include <stdio.h>

/**
 * main - This program prints all the numbers of base 16
 * Description: only using putchar function(3 times)
 * Return: 0
 */
int main(void)
{
	int s = 48;

	while (s < 58)
	{
		putchar(s);
		s++;
	}
	s = 97;
	while (s < 103)
	{
		putchar(s);
		s++;
	}
	putchar('\n');

	return (0);
}
