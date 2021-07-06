#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: a string
 * @needle: other string
 *
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	int sz = 0;
	int pos = 0;

	while (*haystack != '\0')
	{
		while (*(needle + i) != '\0')
		{
			if (*(haystack + i) != *(needle + i))
			{
				break;
			}
			i++;
			j++;
		}
		if (j == _stringL(needle))
			break;
		i = 0;
		j = 0;
		haystack++;
	}
	return (haystack);
}
