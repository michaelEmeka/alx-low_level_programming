#include "3-calc.h"

/**
 * int (*get_op_func(char *s))(int, int);
 * get_op_func - this function receives the desired operator
 * @s: symbol argument
 * Return: calculation
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if (*s == ops[i].op)
		{
			return (ops[i].(*f)(a, b));
		}
		i++;
	}
	return (NULL);
}
