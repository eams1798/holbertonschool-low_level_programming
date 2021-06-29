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
 * puts2 - prints every other character of a string from the first character
 * @str: a string of characters
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _stringL(str); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
