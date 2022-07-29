#include <stdio.h>
#include <stdlib.h>
#include <ctime.h>

/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	int i = 0;
	srand(time(0));

	while(i < 12)
	{
		printf("%d", (rand() % 15) + 1);
		i++;
	}
	return (0);
}
