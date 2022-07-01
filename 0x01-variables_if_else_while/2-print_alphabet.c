#include <stdio.h>

/**
 * main - This program prints the alphabets in lowercase
 * Description:  This program utilizes putchar function only
 * Return: 0
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
	putchar('\n');

	return (0);
}
