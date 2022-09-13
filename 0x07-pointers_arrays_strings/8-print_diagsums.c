#include "main.h"

/**
 * print_diagsums - this function prints the sum each diagonal.
 * @a: casted 2d array into 1d.
 * @size: size of square array(array of same numbers of rows
 * and columns).
 * Return: nothing.
 */
void print_diagsum(int *a, int size)
{
	int **arr = (int **)a;
	int sumL, sumR, i, maxIdx = size - 1;

	i = sumL = sumR = 0;
	while (i <= maxIdx)
	{
		sumL += a[i][i];
		sumR += a[i][maxIdx - i];
		i++;
	}
	printf("%d, %d\n", sumL, sumR);
}
