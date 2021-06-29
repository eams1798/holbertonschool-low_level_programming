#include "holberton.h"

/**
 * _stringL - returns the length of a string.
 * @s: a string of characters
 *
 * Return: the length of a string.
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
 * _puts - prints a string
 * @str: a string of characters
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < _stringL(str); i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
