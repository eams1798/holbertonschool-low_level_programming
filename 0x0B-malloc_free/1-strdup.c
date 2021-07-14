#include <stdlib.h>
#include <stddef.h>


/**
 * _strdup - duplicates a string
 * @str: a string to be duplicated
 *
 * Return: pointer to a newly allocated space in memory, which contains a
 * copy of the string given as a parameter, or NULL if there is an error
 */
char *_strdup(char *str)
{
	size_t n = 0, i = 0;
	char *dup;

	if (str == NULL)
		return (NULL);
	while (str[n] != '\0')
		n++;
	n++;
	dup = (char *)malloc(n * sizeof(char));
	if (dup == NULL)
		return (NULL);
	while (i < n)
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}
