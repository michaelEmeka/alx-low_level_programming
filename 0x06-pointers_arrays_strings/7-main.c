#include "main.h"

/**
 * main - main function
 * Return 0;
 */
int main(void)
{
	char s[] = "Hey people of the world wassup how is your day going?\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
