#include "main.h"

/**
 * puts_half - main function
 * @str: function's parameter
 * Return: Always 0
 */
void puts_half(char *str)
{
	int i = 0, c = 0, halflen;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			c++;
		}
		i++;
	}
	if (c % 2 != 0)
	{
		halflen = (c - 1) / 2;
		_putchar(str[halflen]);
	}
	else
	{
		halflen = c / 2;
		while (str[halflen] != '\0')
		{
			_putchar(str[halflen]);
			halflen++;
		}
	}
	_putchar('\n');
}
