#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - this function searches for an integer
 * @array: array of numbers
 * @size: size of array
 * @cmp: pointer to the function to be used to compare values
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL && size > 0)
	{
		while (i < size)
		{
			if ((*cmp)(array[i]))
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
