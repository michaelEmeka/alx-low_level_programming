#include "main.h"

/**
 * puts_half - main function
 * @str: function's parameter
 * Return: Always 0
 */
void puts_half(char *str)
{
	int i = 0, halflen;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 != 0)
	{
		halflen = (i - 1) / 2;
		_putchar(str[halflen]);
	}
	else
	{
		halflen = i / 2;
		while (str[halflen] != '\0')
		{
			_putchar(str[halflen]);
			halflen++;
		}
	}
}
