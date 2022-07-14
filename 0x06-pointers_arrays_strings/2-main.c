#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char a[100];
	char *ptr;
	int i;

	for (i = 0; i < 5; i++)
	{
		a[i] = '*';
	}
	ptr = _strncpy(a, "Theeese are 5 asterisks: ", 30);
	printf("%s\n", a);
	printf("%s\n", ptr);

	return (0);
}
