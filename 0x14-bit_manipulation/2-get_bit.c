#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to extract its index
 * @index: the index of the given number
 *
 * Return: the value of a bit at a given index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int one = 1;
	if ((one << index) > n)
		return (-1);
	return ((n >> index) & one);
}
