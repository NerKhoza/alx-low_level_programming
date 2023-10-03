#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a grid
 * @grid: parameter 1
 * @height: parameter 2
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
