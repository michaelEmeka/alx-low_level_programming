#include "main.h"

/**
 * _pow_recursion - this function returns the value of x raised
 * to the power of y
 * @x: base number
 * @y: power number
 * Return: value
 */
int _pow_recursion(int x, int y)
{
	if (y <= 1)
	{
		return (x);
	}
	return (_pow_recursion(x, y - 1) * x);
}
