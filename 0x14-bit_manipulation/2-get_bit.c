#include "main.h"

/**
 * get_bit - thsi function returns the bit at the index in a
 * given number
 * @n: base ten number
 * @index: index of the requested bit
 * Return: requested bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
