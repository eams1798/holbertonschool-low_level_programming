#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: a pointer of a integer
 * @b: a pointer of a integer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}
