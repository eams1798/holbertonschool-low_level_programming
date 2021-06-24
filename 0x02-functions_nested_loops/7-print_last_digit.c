#include "holberton.h"

/**
 * print_last_digit - return the last digit of a number
 *
 * @n: a number
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
		n = n * -1;
	last = n % 10;
	_putchar('0' + last);
	return (last);
}
