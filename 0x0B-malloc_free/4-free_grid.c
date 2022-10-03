#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: An input 2D array of integers to free
 * @height: height of grid
 * Return: null
 */

void free_grid(int **grid, int height)
{
	int y = 0;

	if (grid == NULL)
		return;
	while (y < height)
		free((int *)grid[y++]);
	free(grid);

}
