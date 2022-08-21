#include "main.h"

/**
 * clear_bit - sets the value of the bit at a given index to 0.
 * @n: pointer to an unsigned long int.
 * @index: index of the bit.
 * Return: 1 on success, -1 on failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int temp;

	if (index > 63)
		return (-1);
	temp = 1 << index;
	if (*n & temp)
		*n ^= temp;
	return (1);
}
