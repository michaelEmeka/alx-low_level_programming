#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: This program will print the last digit of n
 * Return: 0
 */
int main(void)
{
	int n;
	int lD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lD = n % 10;

	if (lD > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, lD);
	else if (lD == 0)
		printf("Last digit of %i is %i and is 0\n", n, lD);
	else if (lD < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lD);

	return (0);
}
