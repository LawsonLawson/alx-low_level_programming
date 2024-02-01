#include "hash_tables.h"

/**
 * hash_table_get - Retrives a value associated with a key from a hash table.
 *
 * @ht: Pointer to the hash table.
 *
 * @key: Key to search for (a string).
 *
 * Return: Value associated with the key, or NULL if key is not found or on
 * failure.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int hash;

	/* Check if the hash table or key is NULL */
	if (!ht || !key)
		return (NULL);

	/* Compute the hash value for the given key */
	hash = key_index((const unsigned char *)key, ht->size);

	/* Traverse the linked list at the hash index */
	node = (ht->array)[hash];
	while (node && strcmp((char *)key, node->key))
	{
		node = node->next;
	}

	/* If the key is not found, return NULL */
	if (!node)
		return (NULL);

	/* Return the value associated with the key */
	return (node->value);
}
