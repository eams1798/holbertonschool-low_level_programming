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
 * puts_half - prints half of a string
 * @str: a string of characters
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int n;

	if (_stringL(str) % 2 == 0)
		n = _stringL(str) / 2;
	else
		n = (_stringL(str) - 1) / 2;
	n = _stringL(str) - n;
	while (n < _stringL(str))
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
