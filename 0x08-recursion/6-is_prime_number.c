#include "holberton.h"

/**
 * ndiv - return the quantity of divisors of an integer
 * @n: a integer
 * @count: a counter from 0 to n
 *
 * Return: the quantity of divisors of n
 */
int ndiv(int n, int count)
{
	int numdiv = 0;

	if (count <= n)
	{
		if (n % count == 0)
		{
			numdiv++;

		}
		numdiv += ndiv(n, ++count);
	}
	return (numdiv);
}

/**
 * is_prime_number - return a value if a number is prime or not
 * @n: a number
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	int numdiv;

	numdiv = ndiv(n, 1);
	if (numdiv == 2)
		return (1);
	else
		return (0);
}
