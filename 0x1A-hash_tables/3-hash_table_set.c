#include "hash_tables.h"

/**
 * create_node - creates a node of a linked list for an array of a hash table
 * @key: the key of the node
 * @value: the value of the key
 *
 * Return: a pointer to the newly created hash_node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new;

	if (key == NULL || value == NULL)
		return (NULL);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	return (new);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: a hash table
 * @key: a new key to insert
 * @value: the value of the key
 *
 * Return: 1 if the function succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = key_index((const unsigned char *)key, ht->size);
	hash_node_t *node, *aux;

	if (ht == NULL || strlen(key) == 0)
		return (0);

	if (ht->array[i] == NULL)
	{
		node = create_node(key, value);
		ht->array[i] = node;
	}
	else
	{
		aux = ht->array[i];
		while (aux->next != NULL)
		{
			if (strcmp(key, aux->key) == 0)
				break;
			aux = aux->next;
		}
		if (strcmp(key, aux->key) == 0)
		{
			free(aux->value);
			aux->value = strdup(value);
		}
		else
		{
			node = create_node(key, value);
			aux->next = node;
		}
	}
	return (1);
}
