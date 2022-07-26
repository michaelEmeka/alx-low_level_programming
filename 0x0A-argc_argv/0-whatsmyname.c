#include <stdio.h>

/**
 * main - this function prints the name of the program
 * @argc: arguments count
 * @argv: arguments vector
 * exit: EXIT_SUCCESS
 */
int main(int argc, char **argv)
{
	printf("%S\n", *argv);
	exit(EXIT_SUCCESS);
}
