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
 * _strstr - locates a substring
 * @haystack: a string
 * @needle: other string
 *
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (*haystack != '\0')
	{
		while (*(needle + i) != '\0')
		{
			if (*(haystack + i) != *(needle + i))
			{
				break;
			}
			i++;
			j++;
		}
		if (j == _stringL(needle))
			break;
		i = 0;
		j = 0;
		haystack++;
		if (*haystack == '\0')
		{
			return (0);
		}
	}
	return (haystack);
}
