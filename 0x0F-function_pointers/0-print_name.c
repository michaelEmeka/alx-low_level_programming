#include <stdio.h>
#include <stdlib.h>
#include  "function_pointers.h"

/**
 * void print_name(char *name, void (*f)(char *));
 * print_name - this function prints name
 * @f: pointer to function
 * @name: name parameter
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		(*f)(name);
	}
}
