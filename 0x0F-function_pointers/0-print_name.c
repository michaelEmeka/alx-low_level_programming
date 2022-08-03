#include <stdio.h>
#include <stdlib.h>
#include  "function_pointers.h"

/**
 * void print_name(char *name, void (*f)(char *));
 * print_name - this function prints name
 * @f: pointer to function
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
