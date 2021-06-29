#include "holberton.h"

/**
 * puts2 - prints every other character of a string from the first character
 * @str: a string of characters
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		_putchar('\n');
	}
}
