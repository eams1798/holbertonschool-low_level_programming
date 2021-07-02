#include "holberton.h"

/**
 * _strncpy - copies a string only using some bytes of a string
 * @dest: a string
 * @src: a string
 * @n: the number of bytes to copy
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int lenDest = _stringL(dest);
	int lenSrc =_stringL(src);
	int nbytes;

	if (lenSrc >= n-1)
	{
		  nbytes = n-1;
	}
	else
		  nbytes = lenSrc;
	for (i = 0; i <= nbytes; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
