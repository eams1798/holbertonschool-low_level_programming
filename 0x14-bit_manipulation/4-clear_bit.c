#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: a pointer to the number to change its index
 * @index: the index of the given number
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (n == NULL)
		return (-1);
	if ((1 << index) > (int)*n)
		return (-1);
	if ((*n >> index) % 2 == 1)
	{
		num = *n - (1 << index);
		*n = num;
	}
	return (1);
}
