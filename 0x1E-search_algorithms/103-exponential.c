#include "search_algos.h"

/**
 * print_array_bin - prints the result of the seraching
 * @array: an array of numbers
 * @left: first element of a portion of an array to search one value
 * @right: last element of a portion of an array to search one value
 *
 * Return: Nothing
 */
void print_array_bin(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
		else
			printf("\n");
	}
}

/**
 * bin_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @left: the minimum index to use to search the value
 * @right: the maximum index to use to search the value
 * @value: the value to find
 *
 * Return: the first index where value is located, or -1 if value is not
 * present in array or if array is NULL
 */
int bin_search(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		print_array_bin(array, left, right);
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

/**
 * min - defines the minimum value between two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: the minimum value
 */
size_t min(size_t a, size_t b)
{
	if (a <= b)
		return (a);
	return (b);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements of the array
 * @value: the value to find
 *
 * Return: the first index where value is located, or -1 if value is not
 * present in array or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 0, uprlim;

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] == value)
		return (0);
	bound++;
	while (bound < size && array[bound] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	uprlim = min(bound, size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, uprlim);
	return (bin_search(array, bound / 2, uprlim, value));
}
