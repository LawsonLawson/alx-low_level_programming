#include "hash_tables.h"

/**
 * key_index - Returns the index at which a key should be.
 *
 * @key: The hash key.
 *
 * @size: The size of the hash table.
 *
 * Return: the index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_index;

	hash_index = hash_djb2(key);

	if (size != 0)
	{
		return (hash_index % size);
	}
	return (0);
}
