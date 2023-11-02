#include "hash_tables.h"

/**
 * hash_djb2 - The Hash function implementing the djb2 algorithm.
 * @str: This is The string to hash.
 *
 * Return: The calculated hash Always.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hashs;
	int f;

	hashs = 5381;
	while ((f = *str++))
		hashs = ((hashs << 5) + hashs) + f; /* hash * 33 + c */

	return (hashs);
}
