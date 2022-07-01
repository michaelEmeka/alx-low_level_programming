#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: This program will assign a random number to the variable n each time it is executed.
 * Return: 0
 */
int main(void)
{
	int n, lD = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (lD > 5)
		printf("Last digit of %i is %i and is grater than 5\n", n, lD);

	else if (lD == 0)
		printf("Last digit of %i is %i and is 0\n", n, lD);

	else if (lD < 6 && lD > 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lD);

	return (0);
}
