#include <stdio.h>

/**
 * main - This program prints the alphabet in lowercase and then uppercase
 * Description: Utilizes putchar function only
 * Return: 0;
 */
int main(void)
{
	int a, i;

	a = 'a';
	for (i = 0; i < 26; i++)
	{
		putchar(a);
		a++;
	}

	a = 'A';
	for (i = 0; i < 26; i++)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
