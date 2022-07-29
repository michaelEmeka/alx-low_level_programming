#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	unsigned long i = 0, a = 1, b = 2, nxtn;

	printf("%lu, %lu", a, b);
	while (i < 96)
	{
		nxtn = a + b;
		printf(", %lu", nxtn);
		a = b;
		b = nxtn;
		i++;
	}
	putchar('\n');
	return (0);
}
