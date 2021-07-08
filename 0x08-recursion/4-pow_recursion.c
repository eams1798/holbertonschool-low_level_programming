#include "holberton.h"

/**
 * _pow_recursion - raise a number to the power of another
 * @x: a number
 * @y: the power of x
 *
 * Return: the value of x raised to the power of y, or -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, --y));
	}
	else if (y == 0)
		return (1);
	else
		return (-1);
}
