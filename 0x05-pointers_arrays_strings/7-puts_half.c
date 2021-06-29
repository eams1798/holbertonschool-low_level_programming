#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: a string of characters
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int n;

	if (_strlen(str) % 2 == 0)
		n = _strlen(str) / 2;
	else
		n = (_strlen(str) - 1) / 2;
	n = _strlen(str) - n;
	while (n < _strlen(str))
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
