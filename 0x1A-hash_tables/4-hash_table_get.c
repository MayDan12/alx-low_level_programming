#include "hash_tables.h"

/**
 * hash_table_get - This function Retrieve the value associated with
 *                  a key in a hash table.
 * @ht: This is the pointer to the hash table.
 * @key: This is The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nodes;
	unsigned long int indexs;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	indexs = key_index((const unsigned char *)key, ht->size);
	if (indexs >= ht->size)
		return (NULL);

	nodes = ht->array[indexs];
	while (nodes && strcmp(nodes->key, key) != 0)
		nodes = nodes->next;

	return ((nodes == NULL) ? NULL : nodes->value);
}
