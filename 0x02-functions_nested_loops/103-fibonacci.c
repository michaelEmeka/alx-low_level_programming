#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	long int a = 1, b = 2, nxtn = 0, sum = 0;

	sum += b;
	while (nxtn <= 4000000)
	{
		nxtn = a + b;
		a = b;
		b = nxtn;
		if (nxtn % 2 == 0)
		{
			sum += nxtn;
		}
	}
	printf("%ld", sum);
	putchar('\n');
	return (0);
}
