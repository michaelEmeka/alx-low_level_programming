#include "main.h"

/**
 * swap_int - main function
 * @a: first pointer variable
 * @b: second pointer variable
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
