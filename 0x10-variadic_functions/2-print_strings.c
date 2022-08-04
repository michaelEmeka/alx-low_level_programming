#include <stdlio.h>
#include "variadic_functons.h"

/**
 * void print_strings(const char *separator, const unsigned int n, ...);
 * print_strings - this function prints strings
 * @separator: string separator
 * @n: size of arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list = str;
	
	va_start(str,n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);
		if (va_arg(str, char*) != NULL)
			printf("%s" va_arg(str,char*));
		else
			printf("nil");
	}
	va_end(str);
	printf("\n");
}

