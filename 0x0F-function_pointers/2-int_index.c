/*
 * int_index - searches for an integer based on some given conditions
 * @array: an array to be analyzed
 * @size: the size of the array
 *
 * Return: the position in the array of the first element that is true for
 * the given condition
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
}
