#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	//1 2 3 5 8 13 21
	int i = 0, a = 1, b = 2, nxtn;

	printf("%d, %d", a, b);
	while (i < 48)
	{
		nxtn = a + b;
		printf(", %d", nxtn);
		a = b;
		b = nxtn;
		i++;
	}
	putchar('\n');
	return (0);
}
