#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the two dimensional grid
 *
 * @grid: the address of the two dimensional grid
 * @height: height of the grid (rows)
 */
void free_grid(int **grid, int height)
{
	while (height--)
	{
		free(grid[height]);
	}

	free(grid);
}
