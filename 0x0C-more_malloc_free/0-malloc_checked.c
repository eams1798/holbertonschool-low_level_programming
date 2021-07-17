#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b : the number of bytes in the allocated memory
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mll;

	mll = malloc(b);
	if (mll == NULL)
	{
		free(mll);
		mll = NULL;
		return (NULL);
	}
	return (mll);
}

