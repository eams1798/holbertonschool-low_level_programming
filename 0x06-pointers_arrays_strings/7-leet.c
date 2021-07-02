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
	int i, j;
	char *arrleet = "aeotl";
	char *arrLEET = "AEOTL";
	int  arr1337[] = {4, 3, 0, 7, 1};

	for (i = 0; i < _stringL(s); i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (s[i] == arrleet[j] || s[i] == arrLEET[j])
			{
				s[i] = arr1337[j] + 48;
			}
		}
	}
	return (s);
}
