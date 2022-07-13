#include "main.h"

/**
 * _puts - this function prints a string followed by a new line
 * @str: string type parameter
 * Return: Always return 0;
 */
void _puts(char *str)
{
	int i = 0;

	while (i < _strlen(str))
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
