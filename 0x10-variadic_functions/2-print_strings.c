#include <stdio.h>
#include "variadic_functons.h"
#include <stdarg.h>

/**
 * print_strings - this function prints strings
 * @separator: string separator
 * @n: size of arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;

	va_list = str;
	
	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(str, char *);
		if (i > 0 && separator != NULL)
			printf("%s", separator);
		if (ptr != NULL)
			printf("%s", ptr);
		else
			printf("(nil)");
	}
	va_end(str);
	printf("\n");
}
