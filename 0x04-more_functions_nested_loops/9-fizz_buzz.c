#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	int i = 1;

	while (i < 101)
	{
		if (i % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		if (i % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", i);
		}
		i++;
	}
}
