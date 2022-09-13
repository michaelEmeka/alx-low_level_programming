#include "main.h"

/**
 * array_range - this function creates an array of values
 * within the range of min - max both included.
 * @min: minimum value.
 * @max: maximum value.
 * Return: array of number.
 * Or NULL if:
 * -min>max.
 * -malloc fails.
 */
int *array_range(int min, int max)
{
	int *numArr, range, i = 0;

	if (min > max)
		return (NULL);
	range = max - min + 1;
	numArr = malloc(sizeof(int) * range);

	if (!numArr)
		return (NULL);
	while (min <= max)
	{
		numArr[i] = min;
		i++;
		min++;
	}
	return (numArr);
}
