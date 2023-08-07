#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees previously alocated memory
 * @grid: grid
 * @height: height
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
