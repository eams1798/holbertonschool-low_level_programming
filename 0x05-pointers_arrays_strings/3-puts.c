#include "holberton.h"

/**
 * _puts - prints a string
 * @str: a string of characters
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
