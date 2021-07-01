#include "holberton.h"

/**
 * _stringL - returns the length of a string
 *
 * @s: a string of characters
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
 * rev_string - reverses a string
 *
 * @s: a string of characters
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;
	char *x, rev;

	x = s;
	for (i = 0; i < _stringL(s) - 1; i++)
	{

		x++;
	}
	for (i = 0; i < (_stringL(s) - 1) / 2; i++)
	{
		rev = s[i];
		s[i] = *x;
		*x = rev;
		x--;
	}
}
