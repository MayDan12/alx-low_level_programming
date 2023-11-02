#include "hash_tables.h"

/*
 * hash_table_create - This function creates a hash table.
 * Written by Mayowa Oluwanimotele
 * size: This is the size of the array
 * Return: A pointer to the new hash table or NULL if something
 * went wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (hash_table == NULL)
	{
		return (NULL);
	}

	hash_table->size = size;

	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table->array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}

	return (hash_table);
}
