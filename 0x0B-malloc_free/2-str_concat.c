#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory which contains the
 * contents of the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	size_t lens1 = 0, lens2 = 0, i, j;
	char *str;

	if (s1 != NULL)
	{
		while (s1[lens1] != '\0')
			lens1++;
	}
	if (s2 != NULL)
	{
		while (s2[lens2] != '\0')
			lens2++;
	}
	if (s1 == NULL && s2 == NULL)
		str = (char *)malloc(1);
	else
		str = (char *)malloc((lens1 + lens2 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; i <= lens1; i++)
		{
			str[i] = s1[i];
		}
	}
	if (s2 != NULL)
	{
		for (j = 0; j <= lens2; j++)
		{
			str[j + lens1] = s2[j];
		}
	}
	if (s1 == NULL && s2 == NULL)
		str[0] = '\0';
	return (str);
}
