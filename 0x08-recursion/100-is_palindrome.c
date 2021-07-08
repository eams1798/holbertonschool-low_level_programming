#include "holberton.h"

/**
 * _strlenR - returns the length of a string
 * @s: a string
 *
 * Return: the length of a string
 */
int _strlenR(char *s)
{
	int i = 0;

	if (*s != 0)
	{
		i++;
		return (i + _strlenR(++s));
	}
	else
		return (i);
}

/**
 * count_palindrome - count all letters of a string to verify if the string
 * is a palindrome
 * @s: a string
 * @c: a counter
 *
 * Return: the quantity of letters that are equal in the sides of the string
 */
int count_palindrome(char *s, int c)
{
	int yesno = 0;

	if (c < _strlenR(s) / 2)
	{
		if (*(s + c) == *(s + _strlenR(s) - 1 - c))
		{
			yesno++;
			yesno += count_palindrome(s, ++c);
		}
	}
	return (yesno);
}

/**
 * is_palindrome - return a value if a string is palindrome or not
 * @s: a string
 *
 * Return: 1 if s is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int c;

	c = count_palindrome(s, 0);
	if (c == _strlenR(s) / 2 || _strlenR(s) == 0)
	{
		return (1);
	}
	else
		return (0);
}
