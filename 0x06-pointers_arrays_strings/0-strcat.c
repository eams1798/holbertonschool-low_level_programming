#include "holberton.h"

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
