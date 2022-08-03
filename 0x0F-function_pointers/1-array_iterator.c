#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - this function executes a function given as a parameter
 * @size: size of the array
 * @action: pointer to the desired function
 * @array: an array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;
	
	if (array != NULL && action != NULL)
	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
