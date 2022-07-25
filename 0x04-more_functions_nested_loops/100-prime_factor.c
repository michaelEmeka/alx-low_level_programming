#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	long num = 612852475143, i = 2, p = 0;

	while (i <= num)
	{
		if (num % i == 0)
		{
			num /= i;
			p = i;
		}
		else
		{
			i++;
		}
	}
	printf("%lu\n", p);
	return (0);
}
