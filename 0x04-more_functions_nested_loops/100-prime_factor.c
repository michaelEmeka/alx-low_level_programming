#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	long int num = 612852475143, i = 2;

	while (i < num)
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
	printf("%ld\n", i);
	return (0);
}
