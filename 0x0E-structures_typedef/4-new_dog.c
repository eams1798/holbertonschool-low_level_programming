#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new struct of a dog
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
 *
 * Return: a pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;
	char *n = name;
	char *o = owner;

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
	{
		free(nd);
		return (NULL);
	}
	nd->name = n;
	nd->age = age;
	nd->owner = o;
	return (nd);
}
