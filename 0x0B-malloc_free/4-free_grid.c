#include "main.h"

/**
 * free_grid - frees a 2dimensional grid
 * @grid: Pointer to the 2dimensional array
 * @height: The number of rows in the 2dimensional array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
