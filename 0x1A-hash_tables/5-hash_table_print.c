#include "hash_tables.h"

/**
 * hash_table_print - This function Prints a hash table.
 * @ht: This is A pointer to the
 * hash table to print.
 *
 * Description: The Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nodes;
	unsigned long int g;
	unsigned char comma_flags = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (g = 0; g < ht->size; g++)
	{
		if (ht->array[g] != NULL)
		{
			if (comma_flags == 1)
				printf(", ");

			nodes = ht->array[g];
			while (nodes != NULL)
			{
				printf("'%s': '%s'", nodes->key, nodes->value);
				nodes = nodes->next;
				if (nodes != NULL)
					printf(", ");
			}
			comma_flags = 1;
		}
	}
	printf("}\n");
}
