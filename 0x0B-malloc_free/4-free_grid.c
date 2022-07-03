#include "main.h"
/**
 * free_grid - frees 2 dimensional grid
 * @grid: memory to free
 * @height: height of array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
