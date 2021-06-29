#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 * @s: a string of characters
 *
 * Return: the length of the string s
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
