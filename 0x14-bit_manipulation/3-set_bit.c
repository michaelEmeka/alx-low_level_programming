#include "main.h"

/**
 * set_bit - this function sets a bit to 1
 * @n: pointer to the number
 * @index: index of bit
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp = *n;
	unsigned int bitCounter = 0, powOf2 = 1;

	while (temp >>= 1)
		bitCounter++;
	if (index > bitCounter)
		return (-1);
	while (index > 0)
	{
		powOf2 *= 2;
		index--;
	}
	*n |= powOf2;
	return (1);
}
