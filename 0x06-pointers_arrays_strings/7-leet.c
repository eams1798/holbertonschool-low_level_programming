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
 * leet - encodes a string using leet/1337
 * @s: a string
 *
 * Return: a pointer to the resulting string
 */
char *leet(char *s)
{
	int i;

	for (i = 0; i < _stringL(s); i++)
	{
		if (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = '4';
		}
		if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = '3';
		}
		if (s[i] == 'o' || s[i] == 'O')
		{
			s[i] = '0';
		}
		if (s[i] == 't' || s[i] == 'T')
		{
			s[i] = '7';
		}
		if (s[i] == 'l' || s[i] == 'L')
		{
			s[i] = '1';
		}
	}
	return (s);
}
