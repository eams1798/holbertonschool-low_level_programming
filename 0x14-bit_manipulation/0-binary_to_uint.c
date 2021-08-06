#include "main.h"
#include <stddef.h>

/**
 * check_string - Check string
 * @b: Binary
 *
 * Return: Length of string
 */
int check_string(const char *b)
{
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}
	return (i);
}

/**
 * my_pow - Simulate function pow
 * @number: number
 * @base: exponent
 *
 * Return: Power of a number
 */
int my_pow(int number, int base)
{
	if (base <= 0)
		return (1);
	return (number * my_pow(number, (base - 1)));
}

/**
 * binary_to_uint - Convert binary to unsigned int
 * @b: Binary
 *
 * Return: Unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number, result = 0;
	int len, i;

	if (!check_string(b))
		return (0);
	len = check_string(b);
	for (i = 0; i < len; i++)
	{
		number = b[i] - '0';
		result += number * my_pow(2, len - i - 1);
	}
	return (result);
}
