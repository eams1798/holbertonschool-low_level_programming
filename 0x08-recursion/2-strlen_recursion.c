#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: a string
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != 0)
	{
		i++;
		return (i + _strlen_recursion(++s));
	}
	else
		return (i);
}
