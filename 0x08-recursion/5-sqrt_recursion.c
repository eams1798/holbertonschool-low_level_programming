#include "holberton.h"

/**
 * root2 - returns a counter which square raise is n
 * @i: a counter from 0 to natural square root of n
 * @n: a number
 *
 * Return: the natural square root of n, or -1 if the square root doesn't exist
 */
int root2(int i, int n)
{
	if (i * i < n)
		return (root2(++i, n));
	else if (i * i == n)
		return (i);
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: a number
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	int i = 0, r;

	r = root2(i, n);
	return (r);
}
