#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: a string
 * @accept: other string
 *
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, c = 0, d = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				c++;
		}
		if (c == 0)
			break;
		d++;
		c = 0;
	}
	return (d);
}
