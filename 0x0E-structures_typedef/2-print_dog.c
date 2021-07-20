#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - prints the characteristics of a dog
 * @d: a struct of a dog
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	char *namedog;
	float dogage;
	char *ownerdog;
	int i, Lname = 0, Lown = 0;

	if (d == NULL)
		return;
	if (d->name == NULL)
	{
		namedog = malloc(6 * sizeof(char));
		namedog = "(nil)";
	}
	else
	{
		for (i = 0; *((d->name) + i) != '\0'; i++)
			Lname++;
		namedog = malloc((Lname + 1) * sizeof(char));
		namedog = d->name;
	}
	if (d->age < 0)
		dogage = 0;
	else
		dogage = d->age;
	if (d->owner == NULL)
	{
		ownerdog = malloc(6 * sizeof(char));
		ownerdog = "(nil)";
	}
	else
	{
		for (i = 0; *((d->name) + i) != '\0'; i++)
			Lown++;
		ownerdog = malloc((Lown + 1) * sizeof(char));
		ownerdog = d->owner;
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", namedog, dogage, ownerdog);
}
