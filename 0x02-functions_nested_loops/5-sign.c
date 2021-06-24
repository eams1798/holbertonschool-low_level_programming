#include "holberton.h"

/**
 * print_sign - print the sign of a number
 *
 * @n: a number
 * Return: -1 if n is negative, 1 if n is positive, 0 if n is 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
