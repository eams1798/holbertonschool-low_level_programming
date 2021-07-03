#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @s: a string
 *
 * Return: a pointer to the resulting string
 */
char *rot13(char *s)
{
	int i;
	int rot;

	for (i = 0; s[i] != '\0'; i++)
	{
		rot = 13;
		while (rot > 0 && ((s[i] >= 65 && s[i] <= 90)
					|| (s[i] >= 97 && s[i] <= 122)))
		{
			s[i]++;
			if (s[i] == 91 || s[i] == 123)
			{
				s[i] -= 26;
			}
			rot--;
		}
	}
	return (s);
}
