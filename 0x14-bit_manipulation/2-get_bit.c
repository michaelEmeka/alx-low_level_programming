#include "main.h"

/**
 * get_bit - this function returns the bit at the index in a
 * given number
 * @n: base ten number
 * @index: index of the requested bit
 * Return: requested bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bitCounter = 0;
	unsigned long int temp = n;

	while (temp >>= 1)
		bitCounter++;
	if (index > bitCounter)
		return (-1);
	return ((n >> index) & 1);
}
