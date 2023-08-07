#include "main.h"
/**
 * free_grid - this fress 2d array
 * @grid: the 2d grid
 * @height: the height dimension of grid
 * written by daniel oluwanimotele
 * Return: 0 nothing
 */
void free_grid(int **grid, int height)
{
	int d;

	for (d = 0; d < height; d++)
	{
		free(grid[d]);
	}
	free(grid);
}
