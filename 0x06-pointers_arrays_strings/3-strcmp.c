/**
 * _strcmp - compares two strings
 * @s1: a string
 * @s2: a string
 *
 * Return: the result of the comparations in both strings
 */
int _strcmp(char *s1, char *s2)
{
	int dif = 0;

	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s1 != '\0' && *s2 != '\0')
		dif = *s1 - *s2;
	return (dif);
}
