#include "main.h"

/**
 * print_rev - this prints a string in reverse
 * @s: this is the string
 * Return: Always return 0;
 */
void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
