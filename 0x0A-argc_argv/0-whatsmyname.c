#include <stdio.h>
#include <stdlib.h>

/**
 * main - this function prints the name of the program
 * @argc: arguments count
 * @argv: arguments vector
 * exit: EXIT_SUCCESS
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc-argc]);
	exit(EXIT_SUCCESS);
}
