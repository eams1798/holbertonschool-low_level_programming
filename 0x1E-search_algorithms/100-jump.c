#include "search_algos.h"
#include <math.h>


/**
 * jump_search - searches for a value in a sorted array of integers using the
 * Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements of the array
 * @value: the value to find
 *
 * time complexity: O(sqrt(n))
 * space complexity: O(1)
 *
 * Return: the first index where value is located, or -1 if value is not
 * present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j, step = (size_t)sqrt(size);
	int not_found = 1;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i += step)
	{
		j = i + step;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] <= value && value <= array[j])
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i, j);
			not_found = 0;
			break;
		}
	}
	if (not_found == 1)
	{
		i -= step;
		printf("Value found between indexes [%lu] and [%lu]\n", i, i + step);
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		return (-1);
	}
	for (; i <= i + step; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
