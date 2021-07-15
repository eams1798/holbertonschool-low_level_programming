#include "stdlib.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: an array of all arguments saved in strings
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, c = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
			c++;
		}
		c++;
	}
	str = (char *)malloc(c * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	c = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[c] = av[i][j];
			j++;
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}
