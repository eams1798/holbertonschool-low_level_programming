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
 * cap_string - capitalizes all words of a string
 * @s: a string
 *
 * Return: a pointer to the resulting string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; i < _stringL(s); i++)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
				|| s[i] == ';' || s[i] == '.' || s[i] == '!'
				|| s[i] == '?' || s[i] == '"' || s[i] == '('
				|| s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
