#include "main.h"

/**
 * _puts_recursion - this funcion prints out a string
 * @s: string parameter
 * Return: always 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
		return;
	}
}
