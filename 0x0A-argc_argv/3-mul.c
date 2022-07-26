#include <stdio.h>
#include <stdlib.h>

/**
 * main - this program multiplies two numbers
 * @argc: arguments count
 * @argv: arguments vector
 * exit: EXIT_SUCCESS
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc - 1 == 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
}
