#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees the previously created 2d grid
 *
 * @grid: input
 * @height: input
 *
 * Returns: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
