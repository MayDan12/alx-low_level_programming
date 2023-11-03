#include "hash_tables.h"

/**
 * hash_table_set - iThis function Add or update an element in a hash table.
 * @ht: This is the pointer to the hash table.
 * @key: This is The key to add - cannot be an empty string.
 * @value: A value associated with key.
 *
 * Return: This return 0 Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *news;
	char *value_copys;
	unsigned long int indexs, g;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copys = strdup(value);
	if (value_copys == NULL)
		return (0);

	indexs = key_index((const unsigned char *)key, ht->size);
	for (g = indexs; ht->array[g]; g++)
	{
		if (strcmp(ht->array[g]->key, key) == 0)
		{
			free(ht->array[g]->value);
			ht->array[g]->value = value_copys;
			return (1);
		}
	}

	news = malloc(sizeof(hash_node_t));
	if (news == NULL)
	{
		free(value_copys);
		return (0);
	}
	news->key = strdup(key);
	if (news->key == NULL)
	{
		free(news);
		return (0);
	}
	news->value = value_copys;
	news->next = ht->array[indexs];
	ht->array[indexs] = news;

	return (1);
}
