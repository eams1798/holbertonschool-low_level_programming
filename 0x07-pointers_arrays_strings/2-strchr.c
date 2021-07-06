#include "holberton.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: a string
 * @c: the character
 *
 * Return: a pointer to the first occurrence of the character in the string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			break;
		}
		s++;
	}
	if (*s == '\0')
		return (0);
	else
		return (s);
}
