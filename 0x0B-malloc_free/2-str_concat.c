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
	size_t lens1 = 0, lens2 = 0, i;
	char *str;

	if (s2 == NULL)
		return (s1);
	while (s1[lens1] != '\0')
		lens1++;
	while (s2[lens2] != '\0')
		lens2++;
	lens2++;
	str = (char *)malloc((lens1 + lens2) * sizeof(char));
	if (s1 == NULL)
		return (NULL);
	for (i = 0; i < lens1; i++)
	{
		str[i] = s1[i];
	}
	for (i = 0; i < lens2; i++)
	{
		str[i + lens1] = s2[i];
	}
	return (str);
}
