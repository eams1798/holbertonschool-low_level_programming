#include "holberton.h"

/**
 * _stringL - returns the length of a string.
 * @s: a string of characters
 *
 * Return: the length of a string
 */
int _stringL(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * print_rev - prints a string in reverse
 * @s: a string of characters
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;

	for (i = _stringL(s) - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
