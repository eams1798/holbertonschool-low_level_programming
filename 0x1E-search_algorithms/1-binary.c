#include "search_algos.h"

/**
 * print_array - prints the result of the seraching
 * @array: an array of numbers
 * @left: first element of a portion of an array to search one value
 * @right: last element of a portion of an array to search one value
 * 
 * Return: Nothing
 */
void print_array(int *array, size_t left, size_t right)
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
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements of the array
 * @value: the value to find
 *
 * Return: the first index where value is located, or -1 if value is not
 * present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	if (array == NULL)
		return (NULL);
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		print_array(array, left, right);
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
