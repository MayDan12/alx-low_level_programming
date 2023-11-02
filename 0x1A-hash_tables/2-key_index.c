#include "hash_tables.h"

/**
 * key_index - This function get the index at wich a key/value
 *  pair should be stored in array of hash table
 *  @key: This is the key to get the index of.
 *  @size: This is the size of the array of the hash table.
 *  Written by daniel oluwanimotele
 *  Return: The index of the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
