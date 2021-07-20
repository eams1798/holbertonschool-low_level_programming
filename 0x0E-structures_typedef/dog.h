#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a struct with a properties of a dog
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
 *
 * Description: Characteristics of a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
