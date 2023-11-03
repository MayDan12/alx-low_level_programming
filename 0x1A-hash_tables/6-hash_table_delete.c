#include "hash_tables.h"

/**
 * hash_table_delete - This function Deletes a hash table.
 * @ht: The pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *heads = ht;
	hash_node_t *nodes, *tmps;
	unsigned long int g;

	for (g = 0; g < ht->size; g++)
	{
		if (ht->array[g] != NULL)
		{
			nodes = ht->array[g];
			while (nodes != NULL)
			{
				tmps = nodes->next;
				free(nodes->key);
				free(nodes->value);
				free(nodes);
				nodes = tmps;
			}
		}
	}
	free(heads->array);
	free(heads);
}
