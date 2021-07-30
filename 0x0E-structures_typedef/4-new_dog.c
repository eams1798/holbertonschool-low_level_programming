#include <stdlib.h>
#include "dog.h"

/**
 * copy - stores the copy of a string
 * @str: a string of characters	
 *
 * Return: a copy of the given string
 */
char *copy(char *str)
{
	char *cpy;
	int len = 0, i;

	while (str[len] != '\0')
		len++;
	cpy = malloc((len + 1) * sizeof(char));
	if (cpy == NULL)
		return NULL;
	for (i = 0; i < len; i++)
	{
		cpy[i] = str[i];
	}
	cpy[i] = '\0';
	return (cpy);
}

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
	nd->name = copy(n);
	nd->age = age;
	nd->owner = copy(o);
	return (nd);
}
