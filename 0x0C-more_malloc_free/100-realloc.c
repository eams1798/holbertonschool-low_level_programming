#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the previously allocated memory
 * @old_size: the original size of the pointer made with malloc
 * @new_size: the new size of the pointer
 *
 * Return: the pointer with the newly allocated space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *aux, *p2;

	if (new_size <= 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	aux = malloc(new_size);
	if (aux == NULL)
	{
		free(aux);
		free(ptr);
		return (NULL);
	}
	p2 = ptr;
	for (i = 0; i < new_size; i++)
	{
		if (i >= old_size)
			break;
		*(aux + i) = *(p2 + i);
	}
	ptr = malloc(new_size);
	if (ptr == NULL)
	{
		free(ptr);
		free(aux);
		free(p2);
		return (NULL);
	}
	ptr = aux;
	aux = NULL;
	free(p2);
	free(aux);
	return (ptr);
}
