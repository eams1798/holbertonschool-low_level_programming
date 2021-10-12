#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: a hash table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int flag_firstprint = 0;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			for (node = ht->array[i]; node != NULL;
					node = node->next)
			{
				if (flag_firstprint != 0)
					printf(", ");
				printf("\'%s\': \'%s\'", node->key,
						node->value);
				flag_firstprint++;
			}
		}
		printf("}\n");
	}
}
