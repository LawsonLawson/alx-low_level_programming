#include "hash_tables.h"

/**
 * hash_table_set_helper - Creates a new node and adds it to the hash table.
 *
 * @h_t: Hash table.
 *
 * @key: Key.
 *
 * @value: Value.
 *
 * @hash: Index.
 *
 * Return: 1 (success), 0 (failure).
 */
int hash_table_set_helper(hash_table_t *h_t, const char *key,
		const char *value, unsigned long int hash)
{
	char *key_copy, *value_copy;
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	key_copy = strdup(key);
	if (!key_copy)
	{
		free(new);
		return (0);
	}
	new->key = key_copy;
	if (value)
	{
		value_copy = strdup(value);
		if (!value_copy)
		{
			free(new->key);
			free(new);
			return (0);
		}
	}
	else
	{
		value_copy = NULL;
	}
	new->value = value_copy;
	new->next = NULL;
	if (h_t->array[hash] == NULL)
	{
		h_t->array[hash] = new;
	}
	else
	{
		new->next = h_t->array[hash];
		h_t->array[hash] = new;
	}
	return (1);
}

/**
 * hash_table_set - Adds an element to a hash table or update its value.
 *
 * @ht: Pointer to the hash table.
 *
 * @key: Key value.
 *
 * @value: Value to add or update in the hash table.
 *
 * Return: 1 (success), 0 (failure).
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current;
	unsigned long int hash;
	char *value_copy;

	if (!ht || !key)
		return (0);
	/* Get the index using the key */
	hash = key_index((const unsigned char *)key, ht->size);

	/* Update the existing node */
	current = ht->array[hash];
	while (current && strcmp(current->key, key))
	{
		current = current->next;
	}
	if (current)
	{
		value_copy = strdup(value);
		if (!value_copy)
			return (0);
		if (current->value)
			free(current->value);
		current->value = value_copy;
		return (1);
	}
	/* Create a new node */
	return (hash_table_set_helper(ht, key, value, hash));
}
