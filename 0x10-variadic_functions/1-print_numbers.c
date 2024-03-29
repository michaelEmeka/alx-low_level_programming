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
		if (i > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(num, int));
	}
	va_end(num);
	printf("\n");
}
