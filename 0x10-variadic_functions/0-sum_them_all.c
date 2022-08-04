#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * sum_them_all - this function sums its parameters
 * @n: size of arguments
 * @...: a list of other arguments(variadic)
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;

	va_list num;

	if (n == 0)
		return (0);
	va_start(num, n);
	for (int i = 0; i < n; i++)
		sum += va_arg(num, int);

	va_end(num);
	return (sum);
}
