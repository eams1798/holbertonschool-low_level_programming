#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the lowest range of the array
 * @max: the highest range of the array
 *
 * Return:
 */
int *array_range(int min, int max)
{
	int *arrR;
	int i = 0, j;

	if (min > max)
	{
		return (NULL);
	}
	arrR = malloc((max - min + 1) * sizeof(int));
	if (arrR == NULL)
	{
		free(arrR);
		return (NULL);
	}
	for (j = min; j <= max; j++)
	{
		arrR[i] = j;
		i++;
	}
	return (arrR);
}
