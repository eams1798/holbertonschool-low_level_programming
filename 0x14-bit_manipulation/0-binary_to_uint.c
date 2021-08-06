#include "lists.h"

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: a number to be converted
 *
 * Return: the converted number, or 0 if there are incorrect arguments
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, expb = 0, b2, pow10, pow2;
	unsigned int bin, mult, dec = 0;

	while (b[i] != '\0')
	{
		if (b == NULL || (b[i] < 48 || b[i] > 57))
			return (0);
		i++;
	}
	bin = atoi(b);
	i--;
	for (i; i >= 0; i--)
	{
		pow10 = pow(10, expb);
		pow2 = pow(2, expb);
		b2 = (bin / pow10) % 10;
		mult = b2 * pow2;
		dec += mult;
		expb++;
	}
	return (dec);
}
