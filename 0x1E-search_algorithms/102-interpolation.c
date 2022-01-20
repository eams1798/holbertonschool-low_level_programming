#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements of the array
 * @value: the value to find
 *
 * time complexity (worst case): O(n)
 * time complexity (average case): O(log(log(n)))
 * space complexity: O(1)
 *
 * Return: the first index where value is located, or -1 if value is not
 * present in array or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;
	double p1, p2;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		p1 = (double)(high - low) / (array[high] - array[low]);
		p2 = p1 * (double)(value - array[low]);
		pos = low + (size_t)p2;
		if (pos > high)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
