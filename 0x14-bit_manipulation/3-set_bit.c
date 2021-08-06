#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer to the number to change its index
 * @index: the index of the given number
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int num, change;

	if (n == NULL)
	{
		return (-1);
	}
	num = *n;
	change = ((num >> index) | 1) << index;
	*n = change;

	return (1);
}
