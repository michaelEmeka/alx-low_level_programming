#include "main.h"

/**
 * binary_to_uint - this function converts binary to unsigned
 * int
 * @b: a string of 1s amd 0s
 * Return: the unsigned denary
 */
int getMaxPowOf2(const char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i - 1);
}
int getVal(int p)
{
	int val = 2;

	if (p == 0)
		val = 1;
	if (p == 1)
		val = 2;
	while (p > 1)
	{
		val *= 2;
		p--;
	}
	return (val);
}
unsigned int binary_to_uint(const char *b)
{
	unsigned int pow, temp, id = 0, sum = 0;

	if (b == NULL)
		return (0);
	pow = getMaxPowOf2(b);
	while (b[id])
	{
		temp = b[id] - '0';
		if (temp == 1)
			sum += getVal(pow);
		else if (temp == 0)
			sum += 0;
		else
			return (0);
		pow--;
		id++;
	}
	return (sum);
}
