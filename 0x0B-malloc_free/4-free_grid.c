#include "main.h"
#include <stdlib.h>

/**
 * free_grid - This function frees space allocated to a 2 dimensional array
 *
 * @grid: a two dimensional grid
 *
 * @height: the height dimension of the grid
 *
 * Returns: nothing
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
