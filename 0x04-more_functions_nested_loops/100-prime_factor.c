#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	long long int num = 612852475143, i = 2, p = 1, c = 0;

	while (i < num)
	{
		if (num % i == 0)
		{
			while (p <= i)
			{
				if (p % i == 0)
				{
					c++;
				}
				p++;
			}
			if (c == 2)
			{
				printf("%lld");
			}
		}
		p = 1;
		c = 0;
		i++;
	}
	return (0);
}
