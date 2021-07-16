#include <stdio.h>
#include <stdlib.h>

/**
 * strL - returns the length of a string.
 * @s: a string of characters
 *
 * Return: the length of the string s
 */
int strL(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string of characters
 * @s2: second string of characters
 * @n: number of bytes of the second string that will be passed to the
 * concatenation
 *
 * Return: a pointer to the newly allocated space in memory, which contains
 * the concatenation of both strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int len, i;

	if (n > strL(s2))
		len = strL(s2);
	else
		len = n;
	len += strL(s1) + 1;
	cat = malloc(lensizeof(char));
	if (cat == NULL)
	{
		free(cat);
		return (NULL);
	}
	for (i = 0; i < len - 1; i++)
	{
		if (i >= strL(s1))
			cat[i] = s2[i - strL(s1)];
		else
			cat[i] = s1[i];
	}
	cat[i] = '\0';
	return (cat);
}
