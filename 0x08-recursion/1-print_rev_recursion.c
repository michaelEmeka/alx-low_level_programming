#include "main.h"

/**
 * _print_rev_recursion - this recursion prints a string in reverse
 * @s: string parameter
 * Return: always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s - 1);
		_putchar(*s);
	}
	return;
}
