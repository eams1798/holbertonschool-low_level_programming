#include "holberton.h"

/**
 * _stringL - returns the length of a string.
 * @s: a string of characters
 *
 * Return: the length of the string s
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
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: a string
 *
 * Return: a pointer to the resulting string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; i < _stringL(s); i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}
	return (s);
}
