#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: a pointer to an array
 * @b: a byte to be copied
 * @n: number of bytes to be copied
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *a = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (a);
}
