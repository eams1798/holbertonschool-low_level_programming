#include "holberton.h"

/**
 * print_array - prints the first "n" elements of an array of integers
 * @a: an array of integers
 * @n: an index
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
