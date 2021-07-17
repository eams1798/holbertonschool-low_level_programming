#include <stdlib.h>
#include <string.h>

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
	char *cat, *c1, *c2;
	unsigned int len, i;

	if (s1 == NULL)
		c1 = "";
	else
		c1 = s1;
	if (s2 == NULL || n == 0)
		c2 = "";
	else
		c2 = s2;

	if (n > strlen(c2))
		len = strlen(c2);
	else
		len = n;
	len += strlen(c1);
	cat = malloc((len + 1) * sizeof(char));
	if (cat == NULL)
	{
		free(cat);
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		if (i == len)
		{
			cat[i] = '\0';
			break;
		}
		if (i >= strlen(c1))
			cat[i] = c2[i - strlen(c1)];
		else
			cat[i] = c1[i];
	}
	return (cat);
}
