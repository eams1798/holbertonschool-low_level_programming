#include "holberton.h"

/**
 * _abs - Return the absolute value of n
 *
 * @n: a number
 * Return: the absolute value of n
 */
int _abs(int n)
{
	int abs;

	if (n >= 0)
	{
		abs = n;
		return (abs);
	}
	else
	{
		abs = n * -1;
		return (abs);
	}
}
