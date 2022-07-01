#include <stdio.h>

/**
 * main - This program prints the alphabet in lowercase followed by a new line
 * Descriprion: excludes alphabet q and e
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
