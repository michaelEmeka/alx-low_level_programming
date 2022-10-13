#include "main.h"

/*
 * free_grid - this function frees a grid of allocated memory.
 * @grid: 2D array to be freed.
 * @height: number of arrays in grid.
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
		free(grid[i++]);
	free(grid);
	grid = NULL;
}
