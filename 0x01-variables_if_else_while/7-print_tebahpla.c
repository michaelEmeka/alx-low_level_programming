#include <stdio.h>

/**
 * main - Print the lowcase alphabet in reverse
 * Description: using only putchar
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
