#include "hash_tables.h"

/**
 * free_list - frees a linked list at some index of the array of the
 * hash table
 * @node: the head of the linked list
 *
 * Return: Nothing
 */
void free_list(hash_node_t *node)
{
	if (node->next != NULL)
		free_list(node->next);
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * hash_table_delete - deletes a hash table
 * @ht: a hash table
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
			free_list(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
