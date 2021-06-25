#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line with a variable length
 *
 * @n: the length of the line
 * Return: nothing
 */
void print_diagonal(int n)
{
	int c, d;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			for (d = 0; d < c; d++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
