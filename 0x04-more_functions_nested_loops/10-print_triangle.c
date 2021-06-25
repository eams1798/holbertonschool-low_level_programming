#include "holberton.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: the lenght of the base of a triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int c, d, e;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (c = 1; c <= size; c++)
		{
			for (d = size; d > c; d--)
				putchar(' ');
			for (e = 0; e < c; e++)
				putchar('#');
			putchar('\n');
		}
	}

}
