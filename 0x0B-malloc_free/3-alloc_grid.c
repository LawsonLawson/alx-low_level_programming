#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - This function makes a grid
 *
 * @width: the width of the grid
 *
 * @height: the height of the grid
 *
 * Return: The pointer to the grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int w, h;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}
	for (w = 0; w < height; w++)
	{
		grid[w] = malloc(sizeof(int) * width);

		if (grid[w] == NULL)
		{
			for (; w >= 0; w--)
				free(grid[w]);
			free(grid);

			return (NULL);
		}
	}
	for (w = 0; w < height; w++)
	{
		for (h = 0; h < width; h++)
			grid[w][h] = 0;
	}

	return (grid);
}
