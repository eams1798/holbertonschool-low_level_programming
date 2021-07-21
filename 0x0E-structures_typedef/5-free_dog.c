#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory created by a statement of a struct of a dog
 * @d: a struct of a dog;
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
