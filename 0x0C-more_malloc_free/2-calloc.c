#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and fills its elements with zero
 * @nmemb: number of elements of the array
 * @size: the size of the type
 *
 * Return: a pointer to the allocated memory or NULL if the function fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *cll;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	cll = malloc(nmemb * size);
	if (cll == NULL)
	{
		free(cll);
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
		cll[i] = 48 - '0';
	return (cll);
}
