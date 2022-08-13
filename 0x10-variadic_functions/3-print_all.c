#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - this function prints all kinds of stuff
 * format - a list of types of arguments
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *typeS = "cifs";
	char **varT = {"char", "int", "float", "char*"};
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		while (typeS[j])
		{
			if ((format[i] == typeS[3]) && (va_arg(args, char*) == NULL))
				printf("(nill)");
			if (format[i] == typeS[j])
			{
				printf("%typeS[j]", va_arg(args, varT[j]);
			}
			
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
