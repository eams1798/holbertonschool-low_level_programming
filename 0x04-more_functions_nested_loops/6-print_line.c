#include "holberton.h"

/**
 * print_line - prints a line with a variable length
 *
 * @n: the length of the line
 * Return: nothing
 */
void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
