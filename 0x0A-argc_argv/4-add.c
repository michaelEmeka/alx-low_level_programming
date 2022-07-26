#include <stdio.h>
#include <stdlib.h>

/**
 * main - this programm adds positive numbers 
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int sum = 0;

	if (argc > 1)
	{
		while(--argc)
		{	
			if (!(atoi(*++argv)))
			{
				printf("%s\n", "Error");
				return (1);
			}
			else
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
