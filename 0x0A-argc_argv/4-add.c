#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - this program adds positive numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int sum = 0;

	if (argc > 1)
	{
		while (--argc)
		{
			if (isalpha(**++argv))
			{
				printf("%s\n", "Error");
				return (1);
			}
			else if (atoi(*argv) > 0)
			{
				sum += atoi(*argv);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("%d\n", 0);
		return (0);
	}
}
