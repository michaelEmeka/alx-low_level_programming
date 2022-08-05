#include "3-calc.h"
#include <stdio.h>
#include <sdlib.h>

/**
 * main - this function calculates anything
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, **argv)
{
	int num1, num2, (*operate)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if ((*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*' && *argv[2] != '/' && *argv[2] != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	num1 = atoi(*(argv + 1));
	num2 = atoi(*(argv + 3));
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	operate = get_op_func(*(argv + 2));
	printf("%d\n", operate(num1, num2));
	return (0);
}
