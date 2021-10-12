#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the matrix; indicates how many linked lists has the
 * hash table
 *
 * Return: a pointer to the newly created hash table, or NULL if
 * something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int i;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->size = size;
	new->array = malloc(size * sizeof(hash_node_t *));
	if (new->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		new->array[i] = NULL;
	return (new);
}
