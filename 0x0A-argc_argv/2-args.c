#include <stdio.h>
#include <stdlib.h>

/**
 * main - this program prints all the arguments passed
 * @argc: argument count
 * @argv: argument vector
 * exit: EXIT_SUCCESS
 * Return: 0
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	exit(EXIT_SUCCESS);
}
