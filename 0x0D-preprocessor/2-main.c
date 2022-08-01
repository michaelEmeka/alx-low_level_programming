#include <stdio.h>
#include <stdlib.h>

/**
 * main - this program prints the name of the file it was compiled from
 * Return: 0
 */
int main(void)
{
	printf("%s", __FILE__);
	exit(EXIT_SUCCESS);
}
