#include <stdlib.h>
#include <stddef.h>
#include "dog.h"

/**
 * init_dog - Initializes an struct of a dog
 * @d: the struct of a dog
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
 *
 * Return: A pointer to an struct of a dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
