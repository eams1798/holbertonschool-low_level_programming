#include "holberton.h"

/**
 * print_alphabet_x10 - print the lowercase alphabet 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;
	char alph10;

	for (i = 0; i < 10; i++)
	{
		for (alph10 = 'a'; alph10 < 'z'; alph10++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

