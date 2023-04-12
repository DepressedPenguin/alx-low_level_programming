#include <stdlib.h>

/**
 * free_grid - unction that frees a 2 dimensional grid
 * @grid: pointer to a two dimensional.
 * @height: height grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
