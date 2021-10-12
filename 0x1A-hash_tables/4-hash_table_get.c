#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: a hash table
 * @key: a key associated with the value we are looking for
 *
 * Return: the value associated with the key, or NULL if the key couldn’t
 * be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	node = ht->array[i];
	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
