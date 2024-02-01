#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 *
 * @size: Size of the hash table to be created.
 *
 * Return: Pointer to the created hash_table, or NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash_table;
	hash_node_t **arr;

	if (size == 0)
	{
		return (NULL);
	}

	/* Allocate memory for the array of hash nodes */
	arr = malloc(sizeof(*arr) * size);

	if (!arr)
	{
		return (NULL);
	}

	/* Initialize each element in the array to NULL */
	for (i = 0; i < size; ++i)
		arr[i] = NULL;

	/* Allocate memory for the hash table structure */
	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
	{
		free(arr);
		return (NULL);
	}

	/* Initialize the size and array of the hash table */
	hash_table->size = size;
	hash_table->array = arr;

	return (hash_table);
}
