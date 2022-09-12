#include "main.h"

/**
 * alloc_grid - this function returns a pointer to a two dimensional array.
 * @width: numbers of elements in each array.
 * @height: numbers of array.
 * Return: 2d pointer.
 */
int **alloc_grid(int width, int height)
{
	int init = 0;
	int **pp = malloc(height * sizeof(*int));

	if (!pp)
		return (NULL);
	while (init < height)
	{
		pp[init] = malloc(width * sizeof(int));
		if (!pp[init])
		{
			while (--init >= 0)
			{
				free(pp[init]);
			}
			free(pp);
			return (NULL);
		}
		init++;
	}
	return (pp);
}
