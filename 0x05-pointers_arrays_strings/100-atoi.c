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
 * max_index - returns the last position of the first integer found
 * @s: a string of characters
 *
 * Return: a index
 */
int max_index(char *s)
{
	int i;
	int count_index_to = -1;
	int ascii;
	int ascii_next;

	for (i = 0; i < _stringL(s); i++)
	{
		ascii = *(s + i);
		ascii_next = *(s + i + 1);
		if ((ascii >= 48 && ascii <= 57)
				&& !(ascii_next >= 48 && ascii_next <= 57))
		{
			count_index_to = i;
			break;
		}
	}
	return (count_index_to);
}

/**
 * min_index - returns the first position of the first integer found
 * @s: a string of characters
 *
 * Return: a index
 */
int min_index(char *s)
{
	int i;
	int count_index_from;
	int ascii;
	int ascii_next;

	for (i = 0; i <= max_index(s); i++)
	{
		ascii = *(s + i - 1);
		ascii_next = *(s + i);
		if (!(ascii >= 48 && ascii <= 57)
				&& (ascii_next >= 48 && ascii_next <= 57))
		{
			count_index_from = i;
			break;
		}
	}
	return (count_index_from);
}

/**
 * strSign - counts all signs in a string and returns a value
 * @s: a string of characters
 *
 * Return: -1 or 1
 */
int strSign(char *s)
{
	int i;
	int sgn = 1;
	int ascii;

	for (i = 0; i <= max_index(s); i++)
	{
		ascii = *(s + i);
		switch (ascii)
		{
			case 43:
				sgn *= 1;
				break;
			case 45:
				sgn *= -1;
				break;
			default:
				break;
		}
	}
	return (sgn);
}

/**
 * _atoi - converts a string to an integer
 * @s: a string of characters
 *
 * Return: the first signed found number or 0 if there are no digits in s
 */
int _atoi(char *s)
{
	int i;
	int num = 0, mult10 = 1;

	if (max_index(s) ==  -1)
		return (0);
	for (i = max_index(s); i >= min_index(s); i--)
	{
		num += ((*(s + i) - '0') * mult10);
		mult10 *= 10;
	}
	num *= strSign(s);
	return (num);
}
