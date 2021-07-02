#include "holberton.h"

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
