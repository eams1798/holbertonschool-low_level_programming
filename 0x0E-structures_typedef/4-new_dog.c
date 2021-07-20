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

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);
	nd->name = name;
	nd->age = age;
	nd->owner = owner;
	return (nd);
}
