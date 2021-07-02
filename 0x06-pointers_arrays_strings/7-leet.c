#include "holberton.h"

/**
 * leet - encodes a string using leet/1337
 * @s: a string
 *
 * Return: a pointer to the resulting string
 */
char *leet(char *s)
{
	int i, j;
	char *arrleet = "aeotl";
	char *arrLEET = "AEOTL";
	int  arr1337[] = {4, 3, 0, 7, 1};

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == arrleet[j] || s[i] == arrLEET[j])
			{
				s[i] = arr1337[j] + 48;
			}
		}
	}
	return (s);
}
