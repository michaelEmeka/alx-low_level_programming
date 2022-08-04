#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - this function prints out numbers
 * @separator: string to be printed in between numbers
 * @n: number of arguments
 * @...: arguments
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list num;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		switch (i)
		{
			case 0:
				printf("%d", va_arg(num, int));
				break;
			default:
				printf("%s%d", separator, va_arg(num, int));
				break;
		}
	}
	va_end(num);
}
