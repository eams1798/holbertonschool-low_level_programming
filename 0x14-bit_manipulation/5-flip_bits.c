#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits you would need to flip to get from one number
 * to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff_bits = 0;
	unsigned long int difference;
	
	difference = n ^ m;
	while (difference > 0)
	{
		diff_bits += (difference & 1);
		difference >>= 1;
	}
	return (diff_bits);
}
