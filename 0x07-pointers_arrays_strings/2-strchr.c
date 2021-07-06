#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: a string
 * @c: the character
 *
 * Return: a pointer to the first occurrence of the character in the string
 */
char *_strchr(char *s, char c)
{
	char l;
	int i;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			l = c;
			break;
		}
		else
			i++;
	}
	return (l);
}
