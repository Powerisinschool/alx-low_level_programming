#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: should return NULL on failure
 * if width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
			grid[k][l] = 0;
	}
	return (grid);
}
