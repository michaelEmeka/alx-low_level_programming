#include "main.h"

/**
 * print_alphabet - main block
 * Description: This program a-z using print_alphabet function
 * Return: Always 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
