#include "main.h"

/**
 * reverse_array - this function reverses an array
 * @a: an array of integers
 * @n: numbers of elements in the array
 * Return: always 0
 */
void reverse_array(int *a, int n)
{
	int b = 0, t1, t2;

	while (n > b)
	{
		t1 = a[b];
		t2 = a[n];
		a[b] = t2;
		a[n] = t1;
		b++;
		n--;
	}
}
