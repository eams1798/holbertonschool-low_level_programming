#include <stdlib.h>

/**
 * free_grid - frees the memory of a 2 dimensional grid
 * @grid: a 2D array
 * @height: the height of the 2D array
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}
}
