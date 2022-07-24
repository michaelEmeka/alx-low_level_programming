#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	long int i = 0, a = 1, b = 2, nxtn;

	printf("%ld, %ld", a, b);
	while (i < 48)
	{
		nxtn = a + b;
		printf(", %ld", nxtn);
		a = b;
		b = nxtn;
		i++;
	}
	putchar('\n');
	return (0);
}
