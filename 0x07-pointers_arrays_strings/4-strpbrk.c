#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: a string
 * @accept: other string
 *
 * Return: Returns a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, c = 0, d = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				d++;
				break;
			}
		}
		if (d != 0)
			break;
		c++;
	}
	s += c;
	return (s);
}
