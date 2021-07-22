#include <stddef.h>

/**
 * int_index - searches for an integer based on some given conditions
 * @array: an array to be analyzed
 * @size: the size of the array
 * @cmp: a pointer to a function to compare in different ways two integers
 *
 * Return: the position in the array of the first element that is true for
 * the given condition
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
