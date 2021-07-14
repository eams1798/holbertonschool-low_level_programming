#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: a pointer to a 2D array of integers with all elements initialized
 * to 0, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(2 * height * sizeof(int));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(grid + i) = calloc(width, sizeof(int));
		if (*(grid + i) == NULL)
		{
			free(*(grid + i));
			return (NULL);
		}
	}
	return (grid);
}
