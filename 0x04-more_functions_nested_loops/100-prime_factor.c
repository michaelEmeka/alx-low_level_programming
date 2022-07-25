#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	long long int num = 612852475143, i = 2, p = 0;

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
	printf("%lld\n", p);
	return (0);
}
