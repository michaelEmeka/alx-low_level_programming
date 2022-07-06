#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets a-z
 * Description: Performs this operation 10 times
 * Return nothing (void)
 */
void print_alphabet_x10(void)
{
	char c;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
}
