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
 * strcat - concatenates two strings
 * @dest: a string
 * @src: a string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int lenDest = _stringL(dest);
	int lenSrc =_stringL(src);

	for (i = 0; i <= lenSrc; i++)
	{
		dest[lenDest + i] = src[i];
	}
	return (dest);
}
