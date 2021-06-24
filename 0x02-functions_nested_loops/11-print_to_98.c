#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - print a sequence of any number to 98
 *
 * @n: a number
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", n);
	}
	else
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", n);
	}
}
