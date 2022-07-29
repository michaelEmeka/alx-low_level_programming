#include <stdio.h>
#include <stdlib.h>

/**
 * main - this function prints the number of arguments passed to main
 * @argc: argument count
 * @argv: argument vector
 * exit: EXIT_SUCCESS
 * Return: 0
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	argv++;
	exit(EXIT_SUCCESS);
}
