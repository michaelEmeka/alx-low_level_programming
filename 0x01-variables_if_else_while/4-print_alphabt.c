#include <stdio.h>

/**
 * main - This program prints the alphabet in lowercase followed by a new line
 * Descriprion: excludes alphabet q and e
 * Return: 0
 */
int main(void)
{
	int a, i;

	a = 'a';
	for (i = 0; i < 26; i++)
	{
		if (a != 'q' && a != 'e')
			putchar(a);
		else
			continue;
		a++;
	}
	putchar('\n');

	return (0);
}
