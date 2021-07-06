#include "holberton.h"

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: the matrix
 * @size: the size of a side of the matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	long int sdiag1 = 0;
	long int sdiag2 = 0;
	int posd1 = 0, posd2 = size - 1;

	while (posd1 < size * size)
	{
		sdiag1 += *(a + posd1);
		posd1 += (size + 1);
	}
	while (posd2 < (size * size) - 1)
	{
		sdiag2 += *(a + posd2);
		posd2 += (size - 1);
	}
	printf("%ld, %ld\n", sdiag1, sdiag2);
}
